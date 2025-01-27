# French License Plate Generator (C)

## Description
This C tool generates all possible French vehicle license plates using the SIV (Système d'Immatriculation des Véhicules) format, following the specific numbering and letter constraints. The system generates plates with the format `AA-001-AA` and evolves through different stages, using letters and numbers while respecting the exclusion rules.

The French license plate format is as follows:
- **First part**: Two letters (`AA` to `ZZ`)
- **Middle part**: Three digits (`001` to `999`)
- **Last part**: Two letters (`AA` to `ZZ`)

### Numbering System Evolution:
- `AA-001-AA` to `AA-999-AA` (numbers evolve first)
- `AA-001-AB` to `AA-999-AZ` (then the last letter on the right)
- `AA-001-BA` to `AA-999-ZZ` (then the first letter on the right)
- `AB-001-AA` to `AZ-999-ZZ` (then the last letter on the left)
- `BA-001-AA` to `ZZ-999-ZZ` (then the first letter on the left)

### Exclusions:
- Letters `I`, `O`, and `U` are excluded due to their visual similarity to `1`, `0`, and `V`.
- The plate `SS` is excluded from the registration system.
- Temporary plates starting with `WW` or demonstration vehicles starting with `W` are excluded.

## Features
- **Efficient Plate Generation**: Generates all valid license plates following the SIV format.
- **Exclusion Handling**: Ensures that invalid plates (e.g., `SS`, `I`, `O`, `U`, etc.) are not generated.
- **Iterative Plate Generation**: Uses loops and conditions to generate plates and handle the transitions between different sections (e.g., the number part and letter part).

## Technologies Used
- **C**: The tool is implemented in C, leveraging its efficiency for iteration and string manipulation.
- **Standard Library**: Uses standard C libraries (`stdio.h`, `stdlib.h`, `string.h`) to manage input/output and string operations.

## Installation and Usage

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/your-username/french-license-plate-generator.git
