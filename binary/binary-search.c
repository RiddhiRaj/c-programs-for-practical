//binary search in array in C
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,j,k,l,m,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,n20,n21,n22,n23,n24,n25,n26,n27,n28,n29,n30,n31,n32,n33,n34,n35,n36,n37,n38,n39,n40,n41,n42,n43,n44,n45,n46,n47,n48,n49,n50,n51,n52,n53,n54,n55,n56,n57,n58,n59,n60,n61,n62,n63,n64,n65,n66,n67,n68,n69,n70,n71,n72,n73,n74,n75,n76,n77,n78,n79,n80,n81,n82,n83,n84,n85,n86,n87,n88,n89,n90,n91,n92,n93,n94,n95,n96,n97,n98,n99,n100,n101,n102,n103,n104,n105,n106,n107,n108,n109,n110,n111,n112,n113,n114,n115,n116,n117,n118,n119,n120,n121,n122,n123,n124,n125,n126,n127,n128,n129,n130,n131,n132,n133,n134,n135,n136,n137,n138,n139,n140,n141,n142,n143,n144,n145,n146,n147,n148,n149,n150,n151,n152,n153,n154,n155,n156,n157,n158,n159,n160,n161,n162
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&k);
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==k){
            printf("Element found at index %d",mid);
            break;
        }
        else if(a[mid]<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(low>high){
        printf("Element not found");
    }
    return 0;
}