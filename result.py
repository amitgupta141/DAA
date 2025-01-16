import pandas as pd
import matplotlib.pyplot as plt

# Load data from the results.txt file
data = pd.read_csv("results.txt")

# Plot the data
plt.figure(figsize=(10, 6))

# Plot Best Case, Worst Case, and Average Case
plt.plot(data["ArraySize"], data["BestCase"], label="Best Case", color="green", marker="o", linestyle="--")
plt.plot(data["ArraySize"], data["WorstCase"], label="Worst Case", color="red", marker="o", linestyle="-.")
plt.plot(data["ArraySize"], data["AverageCase"], label="Average Case", color="blue", marker="o", linestyle="-")

# Add labels, title, legend, and grid
plt.title("Linear Search: Key Comparisons vs Array Size", fontsize=14)
plt.xlabel("Array Size", fontsize=12)
plt.ylabel("Number of Comparisons", fontsize=12)
plt.legend(fontsize=10)
plt.grid(True, linestyle="--", alpha=0.7)

# Save the graph as an image (optional)
plt.savefig("linear_search_comparisons.png", dpi=300)

# Display the plot
plt.show()
