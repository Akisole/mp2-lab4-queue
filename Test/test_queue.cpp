#include "..\mp2-lab4-queue\Queue.cpp"

#include "gtest.h"

TEST(TQueue, can_create_queue_with_positive_size)
{
	ASSERT_NO_THROW(TQueue<int> TQ(3));
}

TEST(TQueue, throws_when_create_queue_with_negative_size)
{
	ASSERT_ANY_THROW(TQueue<int> TQ(-3));
}

TEST(TQueue, create_queue_is_empty)
{
	TQueue<int> TQ(3);
	ASSERT_ANY_THROW(TQ.Top());
	EXPECT_EQ(1, TQ.IsEmpty());
}

TEST(TQueue, can_check_for_overflow)
{
	const int size=3;
	TQueue<int> TQ1(size);
	for(int i=1; i<=size-1; i++)
		TQ1.Push(i);

	EXPECT_EQ(0, TQ1.IsFull());
	TQ1.Push(1);
	EXPECT_EQ(1, TQ1.IsFull());
}

TEST(TQueue, can_check_for_emptiness)
{
	TQueue<int> TQ1(3);
	TQ1.Push(1);

	EXPECT_EQ(0, TQ1.IsEmpty());
	TQ1.Pop();
	EXPECT_EQ(1, TQ1.IsEmpty());
}

TEST(TQueue, can_pop_elem)
{
	const int size=3;
	TQueue<int> TQ1(size);
	for(int i=1; i<=size; i++)
		TQ1.Push(i);

	int Top1=TQ1.Top();
	int Top2=TQ1.Pop();

	EXPECT_NE(TQ1.Top(), Top1);
	EXPECT_EQ(Top1, Top2);
}

TEST(TQueue, throw_when_pop_elem_from_empty_queue)
{
	TQueue<int> TQ1(3);

	ASSERT_ANY_THROW(TQ1.Pop());
}

TEST(TQueue, can_put_elem_in_queue)
{
	TQueue<int> TQ1(3);

	TQ1.Push(1);

	EXPECT_EQ(1, TQ1.Top());
}

TEST(TQueue, throw_when_put_elem_in_full_queue)
{
	const int size=3;
	TQueue<int> TQ1(size);
	for(int i=1; i<=size; i++)
		TQ1.Push(i);

	ASSERT_ANY_THROW(TQ1.Push(1));
}

TEST(TQueue, can_watch_top_elem)
{
	TQueue<int> TQ1(3);
	TQ1.Push(1);

	EXPECT_EQ(1, TQ1.Top());
}

TEST(TQueue, throw_when_watch_top_elem_from_empty_queue)
{
	TQueue<int> TQ1(3);

	ASSERT_ANY_THROW(TQ1.Top());
}

TEST(TQueue, can_set_maxsize)
{
	const int size=3;
	TQueue<int> TQ1(size-1);
	TQ1.SetMaxSize(size);

	for(int i=1; i<=size-1; i++)
		TQ1.Push(i);

	ASSERT_NO_THROW(TQ1.Push(1));
}

TEST(TQueue, throw_when_set_maxsize_from_no_empty_queue)
{
	TQueue<int> TQ1(3);
	TQ1.Push(1);

	ASSERT_ANY_THROW(TQ1.SetMaxSize(5));
}

TEST(TQueue, can_get_first_poz)
{
	const int size=3;
	TQueue<int> TQ1(size);
	for(int i=1; i<=size; i++)
		TQ1.Push(i);
	TQ1.Pop();

	EXPECT_EQ(1, TQ1.GetFirstPos());
}

TEST(TQueue, can_check_first_elem)
{
	const int size=3;
	TQueue<int> TQ1(size);
	for(int i=1; i<=size; i++)
		TQ1.Push(i);

	EXPECT_EQ(1, TQ1.First());
}

TEST(TQueue, throw_when_check_first_elem_from_empty_queue)
{
	TQueue<int> TQ1(3);

	ASSERT_ANY_THROW(TQ1.First());
}

TEST(TQueue, can_check_last_elem)
{
	const int size=3;
	TQueue<int> TQ1(size);
	for(int i=1; i<=size; i++)
		TQ1.Push(i);

	EXPECT_EQ(3, TQ1.Last());
}

TEST(TQueue, throw_when_check_last_elem_from_empty_queue)
{
	TQueue<int> TQ1(3);

	ASSERT_ANY_THROW(TQ1.Last());
}

TEST(TQueue, can_check_number_elem)
{
	const int size=3;
	TQueue<int> TQ1(size);

	EXPECT_EQ(0, TQ1.NumberElem());
	TQ1.Push(1);
	EXPECT_EQ(1, TQ1.NumberElem());

}