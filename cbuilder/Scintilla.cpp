//   DLL �Ń����^�C�� ���C�u�����̐ÓI�o�[�W�������g�p����ꍇ��
//   DLL �������Ǘ��Ɋւ���d�v�ȃ���:
//
//   �p�����[�^�܂��͊֐����ʂƂ��� String �I�u�W�F�N�g (�܂��̓l�X�g����
//   String ���܂܂�Ă���\���̂�N���X) ��n���֐��� DLL �ŃG�N�X�|�[�g����
//   �ꍇ�́ADLL �v���W�F�N�g�ɂ����� DLL ���g�p���鑼�̂�����v���W�F�N�g�ɂ�
//   ���C�u���� MEMMGR.LIB ��ǉ�����K�v������܂��B�܂��A���� DLL ���g�p����
//   ���̃v���W�F�N�g�ŁADLL ����G�N�X�|�[�g����� TObject �h���łȂ��C�ӂ�
//   �N���X�ɑ΂��� new ���Z�܂��� delete ���Z�����s����ꍇ���AMEMMGR.LIB ��
//   �g�p����K�v������܂��B�v���W�F�N�g�� MEMMGR.LIB ��ǉ�����ƁADLL �Ƃ���
//   �Ăяo������ EXE �������� �}�l�[�W���Ƃ��� BORLNDMM.DLL ���g�p����悤��
//   �Ȃ�܂��B�����̏ꍇ�ABORLNDMM.DLL �t�@�C�����쐬�Ώۂ� DLL �ƈꏏ�ɔz�u
//   ���Ȃ���΂Ȃ�܂���B
//
//   BORLNDMM.DLL ���g�p���Ȃ��悤�ɂ���ɂ́A"char *" �^�܂��� 
//   ShortString �^�̃p�����[�^���g���ĕ��������n���܂��B
//
//   DLL �� RTL �̓��I�o�[�W�������g�p����ꍇ�AMEMMGR.LIB �͈Öق�
//   �ǉ�����邽�߁A�����I�ɒǉ�����K�v�͂���܂���B

#pragma hdrstop
#pragma argsused

extern "C" int _libmain(unsigned long reason)
{
	return 1;
}

