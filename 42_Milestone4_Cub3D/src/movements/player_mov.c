#include "../../includes/cub3d.h"

void	w_m(t_access *ac)
{
	int check_x;
	int check_y;
	double check_dx = ac->p->pos_x + ac->p->pos_dx;
	double check_dy = ac->p->pos_y + ac->p->pos_dy;
	check_x = (int)((check_dx) / 64);
	check_y = (int)((check_dy) / 64);
	if (ac->g->map[check_y][check_x] != '1')
	{
		ac->p->pos_x += ac->p->pos_dx;
		ac->p->pos_y += ac->p->pos_dy;
	}
}

void	s_m(t_access *ac)
{
	int check_x;
	int check_y;
	double check_dx = ac->p->pos_x - ac->p->pos_dx;
	double check_dy = ac->p->pos_y - ac->p->pos_dy;
	check_x = (int)((check_dx) / 64);
	check_y = (int)((check_dy) / 64);
	if (ac->g->map[check_y][check_x] != '1')
	{
		ac->p->pos_x -= ac->p->pos_dx;
		ac->p->pos_y -= ac->p->pos_dy;
	}
}

void	a_m(t_access *ac)
{
	int check_x;
	int check_y;
	double check_dx = ac->p->pos_x + ac->p->pos_dy;
	double check_dy = ac->p->pos_y - ac->p->pos_dx;
	check_x = (int)((check_dx) / 64);
	check_y = (int)((check_dy) / 64);
	if (ac->g->map[check_y][check_x] != '1')
	{
		ac->p->pos_x += ac->p->pos_dy;
		ac->p->pos_y -= ac->p->pos_dx;
	}
}

void	d_m(t_access *ac)
{
	int check_x;
	int check_y;
	double check_dx = ac->p->pos_x -= ac->p->pos_dy;
	double check_dy = ac->p->pos_y += ac->p->pos_dx;
	check_x = (int)((check_dx) / 64);
	check_y = (int)((check_dy) / 64);
	if (ac->g->map[check_y][check_x] != '1')
	{
		ac->p->pos_x -= ac->p->pos_dy;
		ac->p->pos_y += ac->p->pos_dx;
	}
}
