import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("planck_curve.dat")

print(data.shape)

wavelength_nm = data[:, 0]
planck_values = data[0:, 1]

print(wavelength_nm[0])
print(planck_values[0])

max_index = np.argmax(planck_values)
print(max_index)

wavelength_at_max = wavelength_nm[max_index]
print(wavelength_nm[max_index])

wien_peak_nm = 482.9619925

planck_at_max = planck_values[max_index]

absolute_error_nm = abs(wavelength_at_max - wien_peak_nm)
print("Absolute error:", absolute_error_nm, "nm")

relative_error_percent = (absolute_error_nm / wien_peak_nm) * 100
print("Relative error:", relative_error_percent, "%")

plt.plot(wavelength_nm, planck_values)
plt.xlabel(r"$\lambda$ (nm)")
plt.ylabel(r"$B_\lambda (W m^{-3} sr^{-1)}$")
plt.title("Planck spectrum - T = 6000 K")
plt.axvline(x=wien_peak_nm, color="red", label="Wien peak")
plt.scatter(
    wavelength_at_max, planck_at_max, color="mediumvioletred", label="Numerical peak"
)
plt.legend()
plt.show()
