// class Solution {
// public:
//     int compress(vector<char>& chars) {
         
//         if(chars.size()==1){
//                 return 1;
//         }
//            char ch;
//            int chcount;
//            int count=0;
//            ch=chars[0];
//            chcount=1;
//         for(int i=1;i<chars.size();i++){
//             if(ch==chars[i]){
//                 chcount++;
//             }
//             else{
//                 ch=chars[i];
                
//                     if(chcount>=10 && chcount<=99){
//                             count=count+3;
//                     }
//                     else if(chcount>=100){
//                         count=count+4;
//                     }
//                 else if(chcount>=2 && chcount<=9){
//                     count=count+2;
//                 }
//                 else if(chcount==1){
//                     count=count+1;
//                 }
                
//                 chcount=1;
                    
//                 }
//             }
//         return count;
        
                
        
//     }
// };
class Solution {
public:
	int compress(vector<char>& chars) {
		if(chars.size() < 2)
			return chars.size();

		int  i = 0;
		int  j = 0;

		while(i < chars.size()) {
			chars[j] = chars[i];
			int cnt = 0;
			while(i < chars.size() && chars[i] == chars[j]) {
				cnt++;
				i++;
			}

			if(cnt == 1) {
				j++;
			} else {
				string str = to_string(cnt);
				for(auto ch: str)
					chars[++j] = ch;
				j++;
			}
		}

		return j;
	}
};