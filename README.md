You will write a tool to generate all the license plates of French vehicles as in the above SIV format.

Some letters are excluded from the registration system like I, O or U because they are too similar to 1, 0 and V.

The numbering system goes as follows:

AA-001-AA to AA-999-AA (numbers evolve first)
AA-001-AB to AA-999-AZ (then the last letter on the right)
AA-001-BA to AA-999-ZZ (then the first letter on the right)
AB-001-AA to AZ-999-ZZ (then the last letter on the left)
BA-001-AA to ZZ-999-ZZ (then the first letter on the left)

SS is excluded.

Your generator will not consider temporary plates beginning with WW or demonstration vehicles beginning with W.
