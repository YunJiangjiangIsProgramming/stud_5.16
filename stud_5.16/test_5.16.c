#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>








//��һ������nums��һ��ֵval ԭ���Ƴ�nums�����к�val��ȵ�ֵ
//�ռ临�Ӷ�o(1) ʱ�临�Ӷ�o(n)

//int  removeElement(int* nums, int numsize, int val)
//{
//
//	int src = 0;
//	int dst = 0;
//
//	while (src < numsize)
//	{
//		if (nums[src] != val)
//		{
//			nums[dst] = nums[src];
//			dst++;
//			src++;
//		}
//		else
//		{
//			src++;
//		}
//
//	}
//	return dst;
//
//
//
//}
//int main()
//{
//	int nums[10] = {0};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &nums[i]);
//	}
//	int numsize = sizeof(nums) / sizeof(nums[0]);
//	int val = 1;
//	/*scanf("%d " ,&val);*/
//
//	int ret = removeElement(nums,numsize,val);
//	printf("%d ", ret);
//	return 0;
//}

//��һ���������� ԭ��ɾ���ظ����ֵ�Ԫ�� ����ɾ������³���

//  int* removeDuplicutes(int* nums, int numsize)
//{
//	  if (numsize == 0)
//	  {
//		  return 0;
//	  }
//	  int prev = 0;
//	  int cur = 1;
//	  int dst = 0;
//	  
//
//	  while (cur<numsize)
//	  {
//		  if (nums[prev] != nums[cur])
//		  {
//			  nums[dst] = nums[prev];
//			  cur++;
//			  prev++;
//			  dst++;
//		  }
//		  else
//		  {
//			  ++prev;
//			  ++cur;
//
//		  }
//
//	  }
//	  nums[dst] = nums[prev];
//
//	  dst++;
//	  prev++;
//
//	  return nums;
//}
//
//
//
//int main()
//{
//	int nums[8] = {1,1,2,2,3,3,4,5};
//	int numsize = sizeof(nums) / sizeof(nums[0]);
//
//	int* ret= removeDuplicutes( nums, numsize);
//	/*printf("%d ", ret);*/
//	int i = 0;
//	for (i = 0; i < dst; i++)
//
//	{
//		printf("%d ",nums[i]);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int* removeDuplicates(int* nums, int numsize) {
//    if (numsize == 0) {
//        return NULL;
//    }
//
//    int prev = 0;
//    int curr = 1;
//    int dst = 1;  // ��1��ʼ����Ϊ��0��Ԫ�ؿ϶���Ψһ��
//
//    while (curr < numsize) {
//        if (nums[prev] != nums[curr]) {
//            nums[dst] = nums[curr];
//            prev = curr;
//            dst++;
//        }
//        curr++;
//    }
//
//    // ����ȥ�غ�������´�С
//    numsize = dst;
//    return nums;
//}
//
//int main() {
//    int nums[] = { 1, 1, 2, 2, 3, 3, 4, 5 };
//    int numsize = sizeof(nums) / sizeof(nums[0]);
//
//    int* newNums = removeDuplicates(nums, &numsize);
//
//    if (newNums != NULL) {
//        for (int i = 0; i < numsize; i++) {
//            printf("%d ", newNums[i]);
//        }
//        printf("\n");
//
//        // �����Ҫ�������������ͷ�newNums��ռ�õ��ڴ�
//        // free(newNums);
//    }
//    else {
//        printf("Array is empty\n");
//    }
//
//    return 0;
//}



//ģ��������


int main()
{
	int A[5] = {1,0,0,0,0};
	int k = 123;

	addToArrayForm(A,Asize,k,)

	

	return 0;
}







//�һ��������
//struct ListNode
//{
//	int val;
//	struct ListNode* next;
//
//};
//
//typedef  struct ListNode Node;
//
//int main()
//{
//	Node* n1 = (Node*)malloc(sizeof(Node));
//	n1->val = 1;
//	Node* n2 = (Node*)malloc(sizeof(Node));
//	n2->val = 1;
//	Node* n3 = (Node*)malloc(sizeof(Node));
//	n3->val = 2;
//	Node* n4 = (Node*)malloc(sizeof(Node));
//	n4->val = 2;
//	Node* n5 = (Node*)malloc(sizeof(Node));
//	n5->val = 5;
//
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = n5;
//	n5->next = NULL;
//
//	Node* head=
//}


