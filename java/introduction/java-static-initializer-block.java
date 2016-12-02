    //Write your code here
    static boolean flag = true;
    static int B;
    static int H;

    static{
        Scanner sc = new Scanner(System.in);
        
        B = sc.nextInt();
        H = sc.nextInt();
        
        try{
            if((B <= 0) || (H <= 0)){
                throw new Exception("Breadth and height must be positive");
            }
        }
        catch(Exception e){
            flag = false;
            System.out.println(e.toString());
        }
    }
