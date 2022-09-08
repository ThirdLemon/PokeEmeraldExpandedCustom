EventScript_UseSurf::
	@ checkpartymove MOVE_SURF
	@ goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_EndUseSurf
	bufferspeciesname STR_VAR_1, FLDEFF_MON_ANIM_SURF
	setfieldeffectargument 0, FLDEFF_MON_ANIM_SURF
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end
