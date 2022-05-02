#pragma once

#include "IPointerHandler.h"
#include "IPointerHandlerDown.h"
#include "IPointerHandlerUp.h"
#include "IPointerHandlerDrag.h"
class InventorySlot :
	public IPointerHandlerDown,
	public IPointerHandlerUp,
	public IPointerHandlerDrag
	// public IPointerHandler
{
private:
	void Pick();
	void Dragging();
	void Drop();

	// mouse events
	void OnPointerDown();
	void OnPointerUp();

	void OnPointerDrag();
};