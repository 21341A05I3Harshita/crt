int n = int.Parse(Console.ReadLine());
int[]arr = Console.ReadLine().Split(' ').Select(int.Parse).ToArray(); //split by space

int curr=0;
int cnt=0;

foreach(var item in arr){
    curr+=item;
    
    if(curr<0){
        cnt += 1;
        curr = 0;
    }
}

Console.WriteLine(cnt);
