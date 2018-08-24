#pragma once
struct studentinfo 
{
	int studentid;
	int studentcourse;
	int studenttestscore;
};

int printstudentinfo(studentinfo name);
float avgtestscores(studentinfo name);