#include "StateMachine.h"



StateMachine::StateMachine(States & state)
{
	CurrentState = state;
}
void StateMachine::SetState(States state)
{
	CurrentState = state;
}
StateMachine::States StateMachine::GetState()
{
	return CurrentState;
}
StateMachine::~StateMachine()
{
}
