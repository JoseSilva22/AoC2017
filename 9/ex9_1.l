%x COMMENT IGNORE

%{
	int score = 0, level = 1, in_comment = 0;
%}


LBRACE 	 "{"
RBRACE 	 "}"

%%

"<"		{in_comment = 1; BEGIN COMMENT; }
<COMMENT>">"	{in_comment = 0; BEGIN 0;}
<COMMENT>"!"	{BEGIN IGNORE;}
"!"		{BEGIN IGNORE;}
<IGNORE>.|\\n	{if(in_comment){BEGIN COMMENT;}else BEGIN 0;}

{LBRACE}		{score+=level; level++;}
{RBRACE}		{level--;}

%%

int main(int argc, char **argv)
{
	
	yylex();
	printf("%d\n", score);
	return 0;
}

int yywrap()
{
	return 1;
}
