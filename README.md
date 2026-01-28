*this project has been created as part
of the 42 curriculum by yikoubaz*

# push_swap

## Resources

* **Turk Algorithm – Explained in 6 Steps**
  [https://pure-forest.medium.com/push-swap-turk-algorithm-explained-in-6-steps-4c6650a458c0](https://pure-forest.medium.com/push-swap-turk-algorithm-explained-in-6-steps-4c6650a458c0)
<img src = "https://miro.medium.com/v2/resize:fit:1400/format:webp/1*Iji-cUJbgJ1BRmLjT9Qqkw.png">
* **Push Swap — A Journey to Find the Most Efficient Algorithm**
  [https://pure-forest.medium.com/push-swap-turk-algorithm-explained-in-6-steps-4c6650a458c0](https://pure-forest.medium.com/push-swap-turk-algorithm-explained-in-6-steps-4c6650a458c0)

<img src = "https://miro.medium.com/v2/resize:fit:1100/format:webp/1*5zYs22bADMYQvT3o4Ef_8g.png"> 

---

# Description — Explanations (By Me)

## What Is push_swap?

**push_swap** is an algorithmic project where the goal is to build a **program that sorts a list of integers** from smallest to largest, using **only a restricted set of operations**.

The difficulty of the project is not sorting itself, but **doing it with the minimum number of instructions**, while respecting the subject constraints.

---

## How Did I Build and Solve the Project?

### Step 1 — Understanding the Project Idea

The first thing I did was:

* Read the subject carefully
* Search documentation and articles
* Ask questions and analyze other approaches

This helped me build my **own perspective** of the problem and understand what the project really expects.

> The resources mentioned above were my main foundation.
> I focused on understanding the **core idea**, not copying solutions.

### The Core Idea

> Sort a list of numbers using only the allowed operations,
> while minimizing the number of instructions.

To achieve the **maximum score (125%)**, the program must:

* Sort **500 numbers**
* Use **no more than 5500 moves**

This immediately raises the real challenge:

> *How can I sort a large amount of numbers efficiently with such strict rules?*

---

### Step 2 — Algorithm Research

I started searching for efficient sorting algorithms and discovered:

* **Time Complexity**
* **Space Complexity**
* **Big-O Notation**

Some algorithms become very slow as input size grows, while others scale much better.
After comparing different approaches, I decided to use the **Turk Algorithm**, which was designed by 42 students specifically to satisfy `push_swap` requirements.

---

## Understanding the Turk Algorithm

### What Is an Algorithm?

An algorithm is a **finite and ordered set of steps** used to solve a specific problem.

### What Is Turk?

The **Turk Algorithm** is a sorting strategy adapted for `push_swap`.
It works using two stacks (**A** and **B**) and only the operations allowed by the subject.

---

## What Is a Stack?

A stack is a **linear data structure** that follows **LIFO**:

> **Last In, First Out**

### Example

```
Input: 1 2 3 4 5

Stack (top → bottom):
    1
    2
    3
    4
    5
```

* `1` is the last element pushed → first to be removed
* `5` is the first element pushed → last to be removed

---

## Allowed Operations

### Push Operations

```c
void pb(t_list **stack_a, t_list **stack_b)
{
	ft_push(stack_a, stack_b);
	ft_putstr_fd("pb\n", 1);
}

void pa(t_list **stack_b, t_list **stack_a)
{
	ft_push(stack_b, stack_a);
	ft_putstr_fd("pa\n", 1);
}
```

### Swap Operations

```c
void sa(t_list **stack_a)
{
	ft_swap(stack_a);
	ft_putstr_fd("sa\n", 1);
}

void sb(t_list **stack_b)
{
	ft_swap(stack_b);
	ft_putstr_fd("sb\n", 1);
}

void ss(t_list **stack_a, t_list **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_putstr_fd("ss\n", 1);
}
```

### Rotate Operations

```c
void ra(t_list **stack_a)
{
	rotate(stack_a);
	ft_putstr_fd("ra\n", 1);
}

void rb(t_list **stack_b)
{
	rotate(stack_b);
	ft_putstr_fd("rb\n", 1);
}

void rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr_fd("rr\n", 1);
}
```

### Reverse Rotate Operations

```c
void rra(t_list **stack_a)
{
	reverse_rotate(stack_a);
	ft_putstr_fd("rra\n", 1);
}

void rrb(t_list **stack_b)
{
	reverse_rotate(stack_b);
	ft_putstr_fd("rrb\n", 1);
}

void rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putstr_fd("rrr\n", 1);
}
```

---

## Understanding the Operations

* **Push (`pa` / `pb`)**
  Moves the top element from one stack to the other.

* **Swap (`sa` / `sb` / `ss`)**
  Swaps the first two elements of a stack.

* **Rotate (`ra` / `rb` / `rr`)**
  Moves the top element to the bottom.

* **Reverse Rotate (`rra` / `rrb` / `rrr`)**
  Moves the bottom element to the top.

---

## Turk Algorithm Steps 

Now let's See the Logical steps :

##  1 - Indexing Stack (a);
### Explaintation 

---
> Indexing a stack its a function that set an index for Each Node inthat stack
But How it works ?  
so first i have a function named `Index_stack(t_list **stack)` wich is accept as param a stackList.
<br>
> First Copy all Nodes Values to an int arr;
> then Sort that arr using `Bubble Sort`
> after that , Re-assing index for each node with the corret position. cause each node value get compared with the value in the `Sorted arr` so in exmpl
i have stack [4,2,35];
I Copy them into an arr [4,2,35];
2 - sort them > [2,4,35] <br>
> Next Move :  <b>Re-assging</b> so i check 
```c 
int main(void)
{
	if (sorted_Arr[0] == stack_node_value) 
		if yes ; 
		stack_node_index = sorted_arr_index;
	else
		move_to_next_node;
}
```

### Indexing Function :

```c
void	ft_index_stack(t_list **a)
{
	int	*arr;
	int	size;

	size = ft_lstsize(*a);
	arr = ft_copy_to_arr(*a);
	ft_sort_arr(arr, size);
	ft_assign_index_to_each_node(arr, size, a);
	free(arr);
}
```
### re-assing funtion 

```c
void	ft_assign_index_to_each_node(int *sorted_arr, int size, t_list **stack)
{
	t_list	*tmp;
	int		i;

	tmp = *stack;
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (tmp->content == sorted_arr[i])
			{
				tmp->index = i;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
}

```

---
##  2 - Set_target_node
### Explaintation
<b>
Set Target node Fucn, first what is a <b>A Target Node</b> ? 

**TargetNode** : is the biggest smallest Node in A,
and its the Target for B_Node, Smallest Biggest,
it Mean in example we have 

stackA [1,5,3,8];
stackB [4,2,-3,1];

top Item for Both stacks is : A = 1,B = 4;

so Trget Node for 4 is 5 in stack A cause 
5 > 4 and 5 bigger on almost items in A 
execpt 8. and that is.</b>
so after Knowing the Traget Node for Each Node In_B

> We save Position forEach Targeted Node in stackA,
in Node->pos (Attrubuite);
based on that , we Can Calculate the Cost (To make them on Top of stacks);
cost = How Many Moves I Need.
### Func code 

```c

void	ft_set_target_pos(t_list *a, t_list *b)
{
	t_list	*tmp_a;
	t_list	*tmp_b;
	int		best_pos;
	int		best_index;

	tmp_b = b;
	while (tmp_b)
	{
		best_index = INT_MAX;
		tmp_a = a;
		while (tmp_a)
		{
			if (tmp_a->index > tmp_b->index && tmp_a->index < best_index)
			{
				best_index = tmp_a->index;
				best_pos = tmp_a->pos;
			}
			tmp_a = tmp_a->next;
		}
		if (best_index == INT_MAX)
			tmp_b->target_pos = ft_get_min_pos(a);
		else
			tmp_b->target_pos = best_pos;
		tmp_b = tmp_b->next;
	}
}
```

##  3 - Calculate the Costs
### Explaintations 
> Calculat Costs Func its Simple
its Basicly calc How Many Moves we Need for each
node based on its Current Position.
#### But there is a Logic Behind that 
Imagine we have stackWith 4 items we pushed 2 stay 2 
#### Core concepts is i want PushBack from B to A Not RANDOMLY , but smart way make us Easy sort the stack.
##### So, What we Do ? 
> Based on each Node Pos, i Check ether if that node is on the Top of stack or Bottom ? How do i know using this `stack_pos = stack_node_pos < stack_size / 2` if that `Stack_pos < satck_size/2 `
This Mean that Node on Top. else
Mean = `Node at Bottom`, so We Calc How Many Moves to make it on top.

##### How do I know How Many Moves i Need ? 
> by checking this `if (stack_pos < size/2) do rb(node) stack_pos `  Times. `else do rrb(node) to Stack B stack_pos` Times. Easyyyyy.

### Calculate Cost Code 

```c
void	ft_set_costs(t_list *a, t_list *b)
{
	int	size_a;
	int	size_b;

	size_a = ft_lstsize(a);
	size_b = ft_lstsize(b);
	while (b)
	{
		if (b->target_pos <= size_a / 2)
			b->cost_a = b->target_pos;
		else
			b->cost_a = b->target_pos - size_a;
		if (b->pos <= size_b / 2)
			b->cost_b = b->pos;
		else
			b->cost_b = b->pos - size_b;
		b = b->next;
	}
}
```
##  4 - Excute the Moves
### Explaintation

> It's Very Simple after i Save Status forEach Node
, with this function I only Excute Moves Detected by `calc_cost_func`
so What do i do ? `getcheapestNode the sends its status like cost_a,(Nums of moves to brint top) and cost_b(num_to_top)` , then same thing for "Node_B"

> I call in this Order 3  Functions 
<br>{<br> 
	```
	1 - ft_rotate_both(a, b, &ca, &cb); 
	``` <br>
	```
	2 - ft_rotate_a(a, &ca);
	```
	<br>
	```
	3 - ft_rotate_b(b, &cb);
	```
<br>}

> Each of the Above Func, Do its Job , if cost_a = value === cost_b value (Rotate Both Of them to Top).

### Excute_Moves_Func 

```c
void	ft_excute_all(t_list **a, t_list **b)
{
	t_list	*node;
	int		ca;
	int		cb;

	node = ft_get_cheapest(*b);
	ca = node->cost_a;
	cb = node->cost_b;
	ft_rotate_both(a, b, &ca, &cb);
	ft_rotate_a(a, &ca);
	ft_rotate_b(b, &cb);
	pa(b, a);
}

void	ft_final_rotation(t_list **a)
{
	int	min_pos;

	ft_set_pos(*a);
	min_pos = ft_get_min_pos(*a);
	if (min_pos <= ft_lstsize(*a) / 2)
	{
		while (min_pos-- > 0)
			ra(a);
	}
	else
	{
		while (min_pos++ < ft_lstsize(*a))
			rra(a);
	}
}

```
### Full Data Flow Code  Strcuter

```c
void	ft_sort_large(t_list **a, t_list **b)
{
	int	size;
	int	mid;

	size = ft_lstsize(*a);
	mid = size / 2;
	ft_index_stack(a);
	while (ft_lstsize(*a) > 3)
	{
		pb(a, b);
		if ((*b)->index < mid)
			rb(b);
	}
	sort_three(a);
	while (*b)
	{
		ft_set_pos(*a);// update pos after each B pushedback to stack A.
		ft_set_pos(*b); 
		ft_set_target_pos(*a, *b);
		ft_set_costs(*a, *b);
		ft_excute_all(a, b);
	}
	ft_final_rotation(a);
}

```

<p>Everthing Wrote By Love and Passion by <b>yikoubaz</b>@student.1337.ma</p>

---
