#include <stdarg.h>
#include <stdio.h>

#include "vslog.h"

Language language = English;

const char vs_log[2][VS_LOG_COUNT][STRING_LIMIT] = {
	{
		"",
		"ERROR: Insufficient memory. Program aborted.\n",
		"Wrong command. Please check your input and try again.\n\n",
		"Language has been switched to English.\n\n",
		"You have to load an image first.\n\n",
		"\nImage track:\n",
		"\nAduio track:\n",
		"\nBackground image track:\n",
		"    %s%d: filename: %s, ",
		"duration: N/A\n",
		"duration: %.3f(s)\n",
		"begin: I%d, end: I%d\n",

		"Invalid input. Please check your input and try again.\n\n",
		"The file/folder does not exist or it does not have read/write permission.\n\n",
		"%s: Failed to open file.\n\n",
		"Warning: The partition of audio file %s is discarded.\n",
		"Successfully loaded image.\n",
		"Successfully loaded %d image(s).\n",
		"Image file not found. Please check your input and try again.\n\n",
		"You can not overlap audio files.\n\n",
		"Successfully loaded audio.\n",
		"Warning: file %s is also deleted.\n",
		"Successfully deleted file.\n\n",

		"You have to load an audio file first.\n\n",
		"Creating bmp files for display...\n",
		"ERROR: Failed to create bmp files.\n\n",
		"ERROR: No music player detected or you have not set default music player.\n\n",
		"ERROR: Failed to display images.\n\n",
		"Music will be played in %d second(s)...\n",
		"    You have partitioned the audio %d time(s). %d time(s) left.\n",
		"\nTimed out. Please retry.\n\n",
		"\nSuccessfully partitioned audio.\nPress enter to close the display window and the music player.\n"
	}, {
		"",
		"�����ڴ治�㡣�������˳���\n",
		"�����ָ�������������ԡ�\n\n",
		"�������л�Ϊ���ġ�\n\n",
		"����Ҫ������һ��ͼƬ��\n\n",
		"\nͼƬ�죺\n",
		"\n��Ƶ�죺\n",
		"\n����ͼƬ�죺\n",
		"    %s%d���ļ�����%s��",
		"ʱ����N/A\n",
		"ʱ����%.3f���룩\n",
		"��ʼ��I%d��������I%d\n",

		"�������������������ԡ�\n\n",
		"�ļ����У������ڻ��޶�дȨ�ޡ�\n\n",
		"%s���޷����ļ���\n\n",
		"���棺����Ƶ�ļ� %s �����Ļ��ֱ������ˡ�\n",
		"�ɹ�����ͼƬ��\n",
		"�ɹ�����%d��ͼƬ��\n",
		"δ�ҵ�ͼƬ��������������ԡ�\n\n",
		"�����ص���Ƶ�ļ���\n\n",
		"�ɹ�������Ƶ��\n",
		"���棺�ļ� %s Ҳ��ɾ���ˡ�\n",
		"�ɹ�ɾ���ļ���\n\n",

		"����Ҫ��������Ƶ�ļ���\n\n",
		"���ڴ���bmpԤ��ͼ��\n",
		"�����޷�����bmpԤ��ͼ��\n\n",
		"����δ��⵽���ֲ���������δ����Ĭ�����ֲ�������\n\n",
		"�����޷�Ԥ��ͼƬ��\n\n",
		"���ֽ���%d��󲥷š�\n",
		"    ���Ѿ�������%d�Σ�ʣ��%d�Ρ�\n",
		"\n�ѳ�ʱ�������ԡ�\n\n",
		"\n�ɹ�������Ƶ��\n���س����ر�Ԥ�����ں����ֲ�������\n"
	}
};

void VS_print_log(VS_log_tag tag, ...)
{
	va_list vl;
	va_start(vl, tag);
	vprintf(vs_log[language][(int)tag], vl);
	va_end(vl);
}