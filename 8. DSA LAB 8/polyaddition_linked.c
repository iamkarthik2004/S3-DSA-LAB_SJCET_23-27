#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int coeff;
 int exp;
 struct Node* next;
};
struct Node* createNode(int coeff, int exp)
 {
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->coeff = coeff;
  newNode->exp = exp;
  newNode->next = NULL;
  return newNode;
 }
void insertNode(struct Node** poly, int coeff, int exp)
{
  struct Node* newNode = createNode(coeff, exp);
  if (*poly == NULL)
 {
  *poly = newNode;
 }
else
 {
  struct Node* temp = *poly;
  while (temp->next != NULL)
 {
   temp = temp->next;
 }
  temp->next = newNode;
 }
}
 void displayPolynomial(struct Node* poly)
{
  while (poly != NULL)
  {
   printf("%dx^%d", poly->coeff, poly->exp);
   if (poly->next != NULL && poly->next->coeff >= 0) {
   printf(" + ");
  }
 poly = poly->next;
 }
 printf("\n");
}
struct Node* addPolynomials(struct Node* poly1, struct Node* poly2)
 {
  struct Node* result = NULL;
  while (poly1 != NULL && poly2 != NULL)
 {
  if (poly1->exp > poly2->exp)
  {
   insertNode(&result, poly1->coeff, poly1->exp);
   poly1 = poly1->next;
  }
else if (poly1->exp < poly2->exp)
  {
   insertNode(&result, poly2->coeff, poly2->exp);
   poly2 = poly2->next;
  }
else
 {
   int sumCoeff = poly1->coeff + poly2->coeff;
   if (sumCoeff != 0)
  {
   insertNode(&result, sumCoeff, poly1->exp);
  }
  poly1 = poly1->next;
  poly2 = poly2->next;
 }
}
while (poly1 != NULL)
 {
   insertNode(&result, poly1->coeff, poly1->exp);
   poly1 = poly1->next;
 }
while (poly2 != NULL)
 {
  insertNode(&result, poly2->coeff, poly2->exp);
  poly2 = poly2->next;
 }
 return result;
}
int main()
 {
  struct Node* poly1 = NULL;
  struct Node* poly2 = NULL;
  struct Node* sum = NULL;
  int n, coeff, exp;
  printf("Enter the number of terms in the first polynomial: ");
  scanf("%d", &n);
  printf("Enter the terms in the format (coefficient exponent):\n");
 for (int i = 0; i < n; i++)
 {
  scanf("%d %d", &coeff, &exp);
  insertNode(&poly1, coeff, exp);
 }
 printf("Enter the number of terms in the second polynomial:");
 scanf("%d", &n);
 printf("Enter the terms in the format (coefficient exponent):\n");
for (int i = 0; i < n; i++)
 {
  scanf("%d %d", &coeff, &exp);
  insertNode(&poly2, coeff, exp);
 }
  printf("\nFirst Polynomial: ");
  displayPolynomial(poly1);
  printf("Second Polynomial: ");
  displayPolynomial(poly2);
  sum = addPolynomials(poly1, poly2);
  printf("\nSum of the two polynomials: ");
  displayPolynomial(sum);
  return 0;
 }
