public class Solution {
public static void findLargest(int input[][]){
    int sumRow=Integer.MIN_VALUE;
    
    int rowRecordIndex=0;
    int colRecordIndex=0;
    int k=0;
    int m=0;
for(k=0;k<input.length;k++)
{  int sumRow_1=0;

for(m=0;m<input[0].length;m++)
    {    
        sumRow_1+=input[k][m];}
    if(sumRow==sumRow_1)
        continue;
    if(sumRow_1>sumRow){
        sumRow=sumRow_1;
    rowRecordIndex=k;
    
    
}}
     int sumCol=Integer.MIN_VALUE;
    int i=0;
    int j=0;
 for( j=0;j<input[0].length;j++)
 { int sumCol_1=0;
     for( i=0;i<input.length;i++){
     sumCol_1+=input[i][j];}
         if(sumCol_1==sumCol)
             continue;
         if(sumCol_1>sumCol){
        sumCol=sumCol_1;
            colRecordIndex=j;
    }
 
 }
    if(sumRow==sumCol)
        System.out.println("row"+" "+rowRecordIndex+" "+sumRow);
    if(sumRow>sumCol)
        System.out.println("row"+" "+rowRecordIndex+" "+sumRow);
        if(sumRow<sumCol)
        System.out.println("column"+" "+colRecordIndex+" "+sumCol);
		


	}
}
