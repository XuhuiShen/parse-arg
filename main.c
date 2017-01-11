#include <stdio.h>
#include <string.h>

static void check_args(int argc, char *argv[]) /* TODO: add number check*/
{
				if (argc < 4)
								error("insufficient arguments\n");
				char *cmd = argv[3];
				if (strcmp(cmd, "cmd_1") &&
								strcmp(cmd, "cmd_2"))
								printf("unknown command `%s'\n", cmd);
}

static void execte_cmd_1(const char *number, const char *character)
{
				u16 n;
				n = (u16)strtoul(number);
				printf("function: %s, arg number: %hu", __func__, n);
				const char *a = character;
				printf("function: %s, arg character: %s", __func__, a);
}

static void execte_cmd_1(const char *number, const char *character)
{
				u16 n;
				n = (u16)strtoul(number);
				printf("function: %s, arg number: %hu", __func__, n);
				const char *a = character;
				printf("function: %s, arg character: %s", __func__, a);
}

int main(int argc, char *argv[])
{
				check_args(argc, argv);
				const char *argv_1 = argv[1];
				const char *argv_2 = argv[2];
				const char *command = argv[3];

				if (!strcmp(command, "cmd_1"))
								return execte_cmd_1(argv_1, argv_2);
				else if (!strcmp(command, "cmd_2"))
								return execte_cmd_2(argv_1, argv_2);
}
