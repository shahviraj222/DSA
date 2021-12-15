package java;
public class vararag{
    // here ...arr means taking argument as an array data
   static int sum(int ...arr)
   {
    int result=0;
    // this is advance for loop it iterate till the data in array.
    for(int a:arr)
    {
        result=a+result;
    }   
    return result;
   }
   public static void main(String[] args) {
        // here i am paasing the values as many i want
        System.out.println("SUM="+sum(1,2,3,4));
    }
}
