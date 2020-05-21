/* 
	Fabricio Mendes
	  20/05/2020
*/
#include <stdio.h> // Include library

int main(){
        
		int winServer=0; // Declare int variables
        int unix=0;
        int linux=0;
        int netware=0;
        int mac=0;
        int outro=0;
        int voto=0;
        int cont=0;

        float per_winServer, per_unix, per_linux,per_netware,per_macos,per_outro;
        voto=-1; // Declare floats variables
					

        while(voto!=0){
        	
                printf("Survey, what's the best System Operational in your opinion:\n"); // Ask user
                printf("1 - Windows Server\n2 - Unix\n3 - Linux\n4 - Netware\n5 - MacOs\n6 - Outro\n0 - Encerrar Votacao\n"); 	//  Choice alternatives
                scanf("%d",&choice);	// Scanf is a function that save in memory local the variable choice
                switch(choice){ // Switch case is used for make a multiple choices or menus
                        case 1:
                                winServer++;
                                cont++;   
                                break;
                        case 2:
                                unix++;
                                cont++;	
                                break;
                        case 3:
                                linux++;
                                cont++;
                                break;
                        case 4:
                                netware++;
                                cont++;
                                break;
                        case 5:
                                mac++;
                                cont++;
                                break;
                        case 6:
                                outro++;
                                cont++;
                                break;
                        case 0:
                                break;
                        default:
                                printf("Invalid Option\n");

                }
        }
        per_winServer=(float)winServer/cont;	// to transform an int in float and share for cont
        per_winServer=per_winServer*100;		// Take the float and multiplicate per 100, thus achieving the percentage
        
        per_unix=(float)unix/cont;		// to transform an int in float and share for cont
        per_unix=per_unix*100;		// Take the float and multiplicate per 100, thus achieving the percentage
        
        
        per_linux=(float)linux/cont;	//to transform an int in float and share for cont
        per_linux=per_linux*100;		// Take the float and multiplicate per 100, thus achieving the percentage
        

        per_macos=(float)mac/cont;		//to transform an int in float and share for cont
        per_macos=per_macos*100;		// Take the float and multiplicate per 100, thus achieving the percentage
        

        per_netware=(float)netware/cont;	//to transform an int in float and share for cont
        per_netware=per_netware*100;		// Take the float and multiplicate per 100, thus achieving the percentage
        

        per_outro=(float)outro/cont;	//to transform an int in float and share for cont
        per_outro=per_outro*100;		// Take the float and multiplicate per 100, thus achieving the percentage
        
			
			// Show for user the results of Survey
			
        printf("*** Sistema Operacional\tWishes\tPercentual%% ***\n");  // this line show for the user a type of table, separed per tabs, and skip a line
        printf("Windows Server\t\t%d\t%.2f\n", winServer, per_winServer);  // Show the results number of whises separed per tabs
        printf("Unix\t\t\t%d\t%.2f\n", unix,per_unix);
        printf("Linux\t\t\t%d\t%.2f\n", linux, per_linux);
        printf("MacOs\t\t\t%d\t%.2f\n", mac,per_macos);
        printf("Netware\t\t\t%d\t%.2f\n", netware,per_netware);
        printf("Outro\t\t\t%d\t%.2f\n", outro,per_outro);


        

        



        return 0;
}


