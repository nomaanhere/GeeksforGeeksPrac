class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0){
		    HashSet<Integer> set = new HashSet<Integer>();
		    int n = sc.nextInt();
		    int[] arr = new int[n];
		    for(int i=0;i<n;i++){
		        arr[i] = sc.nextInt();
		        if(arr[i]<0){
		            set.add(Math.abs(arr[i]));
		        }else{
		            set.add(arr[i]);    
		        }
		        
		    }
		    System.out.println(set.size());
		
		    t--;
		}
		
	}
}
