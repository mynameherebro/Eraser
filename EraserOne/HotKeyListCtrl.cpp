// HotKeyListCtrl.cpp
// $Id: HotKeyListCtrl.cpp 44 2007-10-12 08:17:49Z lowjoel $
//
// Eraser. Secure data removal. For Windows.
// Copyright � 1997-2001  Sami Tolvanen (sami@tolvanen.com).
// Copyright � 2001-2006  Garrett Trant (support@heidi.ie).
// Copyright � 2007 The Eraser Project
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
// 02111-1307, USA.

#include "stdafx.h"
#include "Eraser.h"
#include "HotKeyListCtrl.h"
#include ".\hotkeylistctrl.h"


// CHotKeyListCtrl

IMPLEMENT_DYNAMIC(CHotKeyListCtrl, CListCtrl)
CHotKeyListCtrl::CHotKeyListCtrl()
{
}

CHotKeyListCtrl::~CHotKeyListCtrl()
{
}


BEGIN_MESSAGE_MAP(CHotKeyListCtrl, CListCtrl)
	ON_NOTIFY_REFLECT(LVN_ITEMACTIVATE, OnLvnItemActivate)
END_MESSAGE_MAP()



// CHotKeyListCtrl message handlers


void CHotKeyListCtrl::OnLvnItemActivate(NMHDR * /*pNMHDR*/, LRESULT *pResult)
{
	// TODO: Add your control notification handler code here
	*pResult = 0;
}
