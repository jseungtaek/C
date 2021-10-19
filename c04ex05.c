//�⺻������ return 1 ���� �޴� ��츦 false�� �Ǵ�
//.h �� ��� ������ �ʿ��� ����? 1) ���� ������ �����ʾƵ� �ȴ�. 2) ���� .c ������ ������ �ϱ� ������ �Լ� ������ ���� c ���ϰ� ���� �����ϴ�.
// ���� -> c ���Ϸ� ������� ������Ʈ ���Ͽ� �ִ� �Լ����� ������ �ٸ� �ҽ� ���Ͽ��� ����� �� �ֵ��� �ϱ� ����.

#include "exception_lib.h"
#include <unistd.h>

int	is_numbers(char c) // ���� �Ǻ�
{
	return (c >= '0' && c <= '9');
}

int	is_argc_right(int argv) // ������ ȯ�濡�� ���â���� ���ڿ��� �޴� �������� �ʿ��� �迭 ���� �ٸ� ���� ���� ��� ������ �ν�
{
	if (argv != 2) //argc�� ��Ÿ�� �� argc�� �Ű������� ���� ó�� ���ڿ� �Է� �������� ./rush.c �� �ϳ��� ���ڿ��� �ν��ϱ⿡ 2��° ������ ���ڿ��� �ƴϸ� error�� �Ǵ� argv[]�� �Ű������� ���ڿ��� �����ϴ� �迭
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	get_length_argv(char *str) //�Է� �޴� ���ڿ��� ����
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		if (is_numbers(*str))
		{
			length++;
		}
		str++;
	}
	return (length);
}

int	check_boundary(int boundary[], int n) //�Է¹��� ��� ��, �� ���� �迭�� ���ֺ��� ���� 5�ʰ� ���� Ȯ�� �ʰ��� error
{
	int	i;

	i = 0;
	while (i < n) //col
	{
		if (boundary[i] + boundary[i + n] > 5)
			return (1);
		i++;
	}
	i = 2 * n;
	while (i < n * 3) //row
	{
		if (boundary[i] + boundary[i + n] > 5)
			return (1);
		i++;
	}
	return (0);
}

//���� ó��
#include "vaildate_boundaries.h"

int	validate_all_boundaries(int **grid, int slot, int *boundary, int length) //�˸��� ���� ���ڰ� �� �ִٸ� �ٽ� ������ ���ư��� ���� Ž��
{
	if (validate_col_up(grid, slot, boundary, length) == 1) 
	{
		return (1);
	}
	if (validate_col_down(grid, slot, boundary) == 1)
	{
		return (1);
	}
	if (validate_row_left(grid, slot, boundary, length) == 1)
	{
		return (1);
	}
	if (validate_row_right(grid, slot, boundary) == 1)
	{
		return (1);
	}
	return (0);
}

int	validate_col_up(int **grid, int slot, int *boundary, int grid_length) 
{
	int	i;
	int	max;
	int	tower_count;
	int	boundary_offset;

	i = 0; //���ʺ��� Ȯ���ϹǷ� 0���� ����
	max = 0;
	tower_count = 0; 
	boundary_offset = 0;//grid�� ù��° ���� �ǹ�
	if (slot / 4 == 3) 
	{
		while (i < grid_length)
		{
			if (grid[i][slot % 4] > max)
			{
				max = grid[i][slot % 4];
				tower_count++;
			}
			i++;
		}
		if (boundary[slot % 4] != tower_count) //boundary�� col_up ���ڿ� ��ġ�ϴ��� �Ǻ�
			return (1);
	}
	return (0);
}

int	validate_col_down(int **grid, int slot, int *boundary)
{
	int	i;
	int	max;
	int	tower_count;
	int	boundary_offset;

	i = 3; //�Ʒ����� Ȯ�� �ϹǷ� i = 3
	max = 0;
	tower_count = 0;
	boundary_offset = 4; //grid�� �ι�° ���� �ǹ�
	if (slot / 4 == 3) 
	{
		while (i > -1)
		{
			if (grid[i][slot % 4] > max)
			{
				max = grid[i][slot % 4];
				tower_count++;
			}
			i--;
		}
		if (boundary[(slot % 4) + boundary_offset] != tower_count) //boundary�� col_down ���ڿ� ��ġ�ϴ��� �Ǻ�
			return (1);
	}
	return (0);
}

int	validate_row_left(int **grid, int slot, int *boundary, int length)
{
	int	i;
	int	max;
	int	tower_count;
	int	boundary_offset;

	i = 0; //���ʺ��� 0
	max = 0;
	tower_count = 0;
	boundary_offset = 8; //grid line3
	if (slot % 4 == 3)
	{
		while (i < length)
		{
			if (grid[slot / 4][i] > max)
			{
				max = grid[slot / 4][i];
				tower_count++;
			}
			i++;
		}
		if (boundary[(slot / 4) + boundary_offset] != tower_count) //boundary�� row_left ���ڿ� ��ġ�ϴ��� �Ǻ�
			return (1);
	}
	return (0);
}

int	validate_row_right(int **grid, int slot, int *boundary)
{
	int	i;
	int	max;
	int	tower_count;
	int	boundary_offset;

	i = 3; //�����ʺ��� ���� Ȯ�� �̹Ƿ� 3
	max = 0;
	tower_count = 0;
	boundary_offset = 12; //grid last line
	if (slot % 4 == 3)
	{
		while (i > -1)
		{
			if (grid[slot / 4][i] > max)
			{
				max = grid[slot / 4][i]; //�� �����ʺ��� �����ؼ� max���� ����
				tower_count++;//�����ʿ� �� ���ڶ� �´��� �񱳸� ���� ����
			}
			i--;
		}
		if (boundary[(slot / 4) + boundary_offset] != tower_count) //�� �����ʿ� �ִ� ���ڶ� ���� �����ʺ��� �� ������ ���� �������� �Ѿ �ƴ϶�� �ٽ� resolve ���� ���
			return (1);
	}
	return (0);
}

//resolve (����Ǫ�� �˰���)
#include "resolve.h"
#include "vaildate_boundaries.h"
#include <unistd.h>

int	g_height[4] = { 1, 2, 3, 4 };

int	resolve(int **grid, int *boundary, int slot, int grid_length)
{
	if (resolve_recursive(grid, boundary, slot, grid_length) == 1) //��͸� ������ ���������� �ȴٸ� ������ ������ �ȵǴ� ��
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	resolve_recursive(int **grid, int *boundary, int slot, int grid_length)
{
	int	rows;
	int	cols;
	int	i;

	rows = slot / grid_length;
	cols = slot % grid_length; // �迭�� ��ǥó�� ����
	if (slot == 16) //�迭�� full�̸� ��ȯ
		return (0);
	i = 0;
	while (i < grid_length)
	{
		if (validate_overlap(grid, slot, g_height[i], grid_length) == 0) //���� ���� �� �˻�, �ߺ��� �� �ִ��� �Ǻ�
		{
			grid[rows][cols] = g_height[i]; //������ 1���� ���ʴ�� ����
			if (validate_all_boundaries(grid, slot, boundary, grid_length) == 0) //up, down, left, right ���ڸ� ���ʷ� Ȯ���ؼ� ���ڰ� �˸����� �Ǻ�
			{
				if (!resolve_recursive(grid, boundary, slot + 1, grid_length)) //
					return (0);
			}
		}
		i++;
	}
	return (1);
}

int	validate_overlap(int **grid, int slot_of_grid, int height, int grid_length) //����, ���� �� �˻�, �ߺ��� ���� �ִ��� �Ǻ��ϴ� �Լ�
{
	int	i;
	int	rows;
	int	cols;

	rows = slot_of_grid / grid_length;
	cols = slot_of_grid % grid_length; // �迭�� ��ǥó�� ���� ���� ��, �������� ���� �Ǵ�
	i = 0;
	while (i <= rows)
	{
		if (grid[i][cols] == height) //���� ���� ������
		{
			return (1); //false
		}
		i++;
	}
	i = 0;
	while (i <= cols)
	{
		if (grid[rows][i] == height)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

//main 
#include <unistd.h>
#include <stdlib.h>
#include "exception_lib.h"
#include "resolve.h"
#include "vaildate_boundaries.h"

#define BOUNDARY_COUNT 4

int		put_boundary_value(int *boundary, char *args, int grid_length);
int		make_grid_malloc(int ***gird, int grid_length);
void	ft_print_grid(int **grid, int size);
void	free_memory(int ***grid, int grid_length);

int	main(int argc, char **argv)
{
	int		arg_len;
	int		grid_length;
	int		boundary[4 * BOUNDARY_COUNT];
	int		**grid;

	if (is_argc_right(argc) == 1)
		return (1);
	arg_len = get_length_argv(argv[1]); //boundary �迭�� ����
	grid_length = arg_len / BOUNDARY_COUNT;
	if (arg_len != grid_length * BOUNDARY_COUNT || grid_length != 4) //arg_len �� 4 * 4 ���ϰ� ����Ȯ���� ���� grid_legnth == 4
	{
		write(1, "Error\n", 6);
		return (1);
	}
	put_boundary_value(boundary, argv[1], 4);
	if (check_boundary(boundary, BOUNDARY_COUNT) == 1) //�ֺ� boundary �迭 üũ�ؼ� false�� ��� error
	{
		write(1, "Error\n", 6);
		return (1);
	}
	make_grid_malloc(&grid, 4); //�����Ҵ�
	resolve(grid, boundary, 0, grid_length); //�˰��� Ǯ��
	ft_print_grid(grid, grid_length); //Ǯ���� �迭 ����Ʈ
	free_memory(&grid, grid_length); //�Ҵ�����
	return (0);
}

int	put_boundary_value(int *boundary, char *args, int grid_length) //argv�� ���� �迭�� ���� ���� �ľ��ؼ� ����
{
	int	*p;
	int	i;

	p = boundary;
	i = 0;
	while (i < grid_length * BOUNDARY_COUNT)
	{
		if (is_numbers(*args))
		{
			*p = *args - '0';
			i++;
			p++;
		}
		args++;
	}
	return (0);
}

int	make_grid_malloc(int ***gird, int grid_length) //�����Ҵ�, 3�� �����͸� ���� ���� 2���� �迭 �� 2�� �������� �ּ� ������ ����
{
	int	**p; //���� �����͸� �����ϴ� ������ �Ҵ� ���� �� �� grid�� �ּҸ� �Ҿ������ �ʱ� ���� 
	int	i;
	int	j;

	*gird = (int **)malloc(grid_length * sizeof(int *)); //�����Ҵ�
	p = *gird;
	if (p == 0)
		return (1);
	i = 0;
	while (i < grid_length)
	{
		p[i] = (int *)malloc(grid_length * sizeof(int));
		if (p[i] == 0)
			return (1);
		j = 0;
		while (j < grid_length)
		{
			p[i][j] = 0;
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_print_grid(int **grid, int size) //grid ���
{
	int		i;
	int		j;
	char	ch;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			ch = grid[i][j] + '0'; //���� ǥ���� ���� + '0'
			write(1, &ch, 1);
			if (j != size - 1)
				write(1, " ", 1); //���� ������ ����
			else
				write(1, "\n", 1); //�ٹٲ�
			j++;
		}
		i++;
	}
}

void	free_memory(int ***grid, int grid_length) //�Ҵ�����
{
	int	i;
	int	**p;

	i = 0;
	p = *grid;
	while (i < grid_length)
	{
		free(p[i]);
		i++;
	}
	free(p);
}