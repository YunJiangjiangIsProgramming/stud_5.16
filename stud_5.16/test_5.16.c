#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>








//给一个数组nums和一个值val 原地移除nums数组中和val相等的值
//空间复杂度o(1) 时间复杂度o(n)

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

//给一个排序数组 原地删除重复出现的元素 返回删除后的新长度

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
//    int dst = 1;  // 从1开始，因为第0个元素肯定是唯一的
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
//    // 返回去重后数组的新大小
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
//        // 如果需要，可以在这里释放newNums所占用的内存
//        // free(newNums);
//    }
//    else {
//        printf("Array is empty\n");
//    }
//
//    return 0;
//}



//模拟大数相加


int main()
{
	int A[5] = {1,0,0,0,0};
	int k = 123;

	addToArrayForm(A,Asize,k,)

	

	return 0;
}







//搭建一个单链表
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


