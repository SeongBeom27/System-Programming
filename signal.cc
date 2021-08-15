#include <iostream>
#include <signal.h>

using namespace std;

/**
 * 1    SIGHUP     : HangUP의 약어로 로그 아웃과 같이 터미널에서 접속이 끊겼을 때 보내지는 시그널
 * 2    SIGINT     : 키보드로부터 오는 인터럽트 시그널로 실행을 중지 (CTRL + C)
 * 3    SIGQUIT    : 키보드로부터 오는 실행 중지 시그널 (CTRL + \)
 *                -> 기본적으로 프로세스를 종료시킨 뒤 코어를 덤프하는 역할
 * 4    SIGILL     : illegal instruction의 약자로 잘못된 명령을 사용했을 때 발생
 * 5    SIGTRAP    : trace, breakpoint에서 TRAP이 발생했을 때
 * 6    SIGABRT    : abort의 약자로 비정상 종료 함수에 의해 발생
 * 7    SIGBUS     : 메모리 접근 에러 시 발생
 * 9    SIGKILL    : 무조건 종료, 프로세스를 강제로 종료시키는 시그널
 * 11   SIGSEGV    : invalid memory reference
 * 15   SIGTERM    : Terminate의 약자로 가능한 정상 종료시키는 시그널로 kill 명령
 * 17   SIGCHLD    : 자식 프로세스가 stop 되거나 종료되었을 때 부모에게 전달되는 신호
 *                   -> 멀티 프로세스 프로그래밍 시 제어
 * 18   SIGCONT    : Continue의 약자로 STOP 시그널에 의해 정지된 프로세스를 다시 실행 시킬 경우 사용
 * 19   SIGSTOP    : 터미털에서 입력된 정지 시그널 -> SIGCONT로 재실행 가능
 * 20   SIGTSTP    : 실행 정지 후 다시 실행을 계속하기 위해 대기시킨다. (CTRL + z) -> SIGCONT로 재실행 가능
 * 29   SIGIO      : 비동기 입출력이 발생했을 경우
 * 
 */
int main()
{

    return 0;
}