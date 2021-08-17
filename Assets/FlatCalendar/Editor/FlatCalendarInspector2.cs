/**
 * Flat Calendar
 * 
 * This class override the inspector of Flat Calendar Game Object
 *
 * @version 1.0
 * @author  Gerardo Ritacco
 * @email   gerardo.ritacco@3dresearch.it
 * @company 3dresearchsrl
 * @website http://www.3dresearch.it/
 * 
 * Copyright © 2016 by 3dresearchsrl
 *
 * All rights reserved. No part of this publication may be reproduced, distributed, 
 * or transmitted in any form or by any means, including photocopying, recording, or 
 * other electronic or mechanical methods, without the prior written permission of the 
 * publisher, except in the case of brief quotations embodied in critical reviews and 
 * certain other noncommercial uses permitted by copyright law. For permission requests, 
 * write to the publisher, addressed “Attention: Permissions Coordinator,” at the address below.
 */

using UnityEngine;
using UnityEditor;
using System.Collections;

[CustomEditor(typeof(FlatCalendar2))]
[CanEditMultipleObjects]
[ExecuteInEditMode]
public class FlatCalendarInspector2 : Editor {

	SerializedProperty uiStyle;
    SerializedProperty uiLanguage;
    SerializedProperty eventNotification;
    SerializedProperty startWeekFromSunday;

    //init from file 
    SerializedProperty initCalendarFromFile;
    SerializedProperty filePath;
    SerializedProperty btn_overrideEventsFile;

    //visualize events
    SerializedProperty eventScollbar;

    //buttons
    SerializedProperty sliderDaysButtons;
    SerializedProperty sliderMonthsButtons;
    SerializedProperty sliderYearsButtons;
    SerializedProperty btnNextYear;
    SerializedProperty btnPrevYear;
    SerializedProperty btnNextMonth;
    SerializedProperty btnPrevMonth;
    SerializedProperty btnCalendar;
    SerializedProperty btnEvents;
    SerializedProperty btn_SwitchModality;

    //2 view Modality components
    SerializedProperty slider;
    SerializedProperty grid;
    SerializedProperty scrollRects;

    //label
    SerializedProperty daysOfWeek_events_label;
    SerializedProperty labelYear;
    SerializedProperty labelMonth;
    SerializedProperty labelDayOfWeek;
    SerializedProperty labelDayNumber;
    SerializedProperty labelNumberEvents;

    //addEvents components
    SerializedProperty btnAddEvent;
    SerializedProperty addEventVisualizer;
    SerializedProperty field_TimeSlider;
    SerializedProperty field_timeError;
    SerializedProperty add_event_labels;
    SerializedProperty fieldName;
    SerializedProperty fieldDescription;
    SerializedProperty btnConfirm;
    SerializedProperty btnCancel;
    SerializedProperty label_Date;

    //showEvents components
    SerializedProperty event_Visualizer_backButton;
    SerializedProperty eventObj;
    SerializedProperty eventsScrollView;
    SerializedProperty eventObjcContent;

    GUIContent[] guil = new GUIContent[] { new GUIContent("GREEN"),
										   new GUIContent("RED"),
										   new GUIContent("PINK"),
										   new GUIContent("BLUE")
										 };

    GUIContent[] language = new GUIContent[] { new GUIContent("ENGLISH"),
                                           new GUIContent("ITALIAN"),
                                           new GUIContent("SPANISH")
                                         };

    public void OnEnable()
	{
        btn_SwitchModality = serializedObject.FindProperty("btn_SwitchModality");
        scrollRects = serializedObject.FindProperty("scrollRects");
        slider = serializedObject.FindProperty("slider");
        grid = serializedObject.FindProperty("grid");

        uiStyle = serializedObject.FindProperty("current_UiStyle");
        uiLanguage = serializedObject.FindProperty("current_UiLanguage");
        eventNotification = serializedObject.FindProperty("eventNotification");
        startWeekFromSunday = serializedObject.FindProperty("startWeekFromSunday");

        initCalendarFromFile = serializedObject.FindProperty("initCalendarFromFile");
        btn_overrideEventsFile = serializedObject.FindProperty("btn_overrideEventsFile");
        filePath = serializedObject.FindProperty("filePath");
        
        eventScollbar = serializedObject.FindProperty("event_Visualizer");
        sliderDaysButtons = serializedObject.FindProperty("sliderDaysButtons");
        sliderMonthsButtons = serializedObject.FindProperty("sliderMonthsButtons");
        sliderYearsButtons = serializedObject.FindProperty("sliderYearsButtons");
        btnNextYear = serializedObject.FindProperty("btn_nextYear");
        btnPrevYear = serializedObject.FindProperty("btn_prevYear");

        btnNextMonth = serializedObject.FindProperty("btn_nextMonth");
        btnPrevMonth = serializedObject.FindProperty("btn_prevMonth");

        btnCalendar = serializedObject.FindProperty("btn_calendar");
        btnEvents = serializedObject.FindProperty("btn_showEvents");

        daysOfWeek_events_label = serializedObject.FindProperty("daysOfWeek_events_label");
        labelYear = serializedObject.FindProperty("label_year");
        labelMonth = serializedObject.FindProperty("label_month");
        labelDayOfWeek = serializedObject.FindProperty("label_dayOfWeek");
        labelDayNumber = serializedObject.FindProperty("label_dayNumber");
        labelNumberEvents = serializedObject.FindProperty("label_numberEvents");

        btnAddEvent = serializedObject.FindProperty("btn_AddEvent");
        addEventVisualizer = serializedObject.FindProperty("addEvent_Visualizer");
        field_TimeSlider = serializedObject.FindProperty("field_TimeSlider");
        field_timeError = serializedObject.FindProperty("field_timeError");

        
        fieldName = serializedObject.FindProperty("field_Name");
        add_event_labels = serializedObject.FindProperty("add_event_labels");
        fieldDescription = serializedObject.FindProperty("field_Description");
        btnConfirm = serializedObject.FindProperty("btn_Confirm");
        btnCancel = serializedObject.FindProperty("btn_Cancel");
        label_Date = serializedObject.FindProperty("label_Date");

        eventObj = serializedObject.FindProperty("eventObj");
        eventsScrollView = serializedObject.FindProperty("eventsScrollView");
        eventObjcContent = serializedObject.FindProperty("eventObjcContent");
        event_Visualizer_backButton = serializedObject.FindProperty("event_Visualizer_backButton");
    }

    public override void OnInspectorGUI()
	{
		serializedObject.Update();

		uiStyle.intValue = EditorGUILayout.Popup(uiStyle.intValue,guil);
        uiLanguage.intValue = EditorGUILayout.Popup(uiLanguage.intValue, language);
        // UI STYLE CHOICE
        FlatCalendarStyle2.changeUIStyle(uiStyle.intValue);

        startWeekFromSunday.boolValue = EditorGUILayout.Toggle("Start The Week From Sunday", startWeekFromSunday.boolValue);
        eventNotification.boolValue = EditorGUILayout.Toggle("Get Notified by Daily Events", eventNotification.boolValue);
        initCalendarFromFile.boolValue = EditorGUILayout.Toggle("Save/Load Events From File", initCalendarFromFile.boolValue);

        if (initCalendarFromFile.boolValue)
        {
            EditorGUI.indentLevel++;
            filePath.stringValue = EditorGUILayout.TextField("Events File Path", filePath.stringValue);
        }

        ////SCROLL RECT
        //EditorGUILayout.PropertyField(scrollRects, new GUIContent("Scrolls Rect"), true);

        ////GRID SLIDER COMPONENT
        //EditorGUILayout.PropertyField(btn_SwitchModality, new GUIContent("Switch Button"), true);
        //EditorGUILayout.PropertyField(slider, new GUIContent("Slider"), true);
        //EditorGUILayout.PropertyField(grid, new GUIContent("Grid"), true);

        ////OVERRIDE EVENTS FILE BUTTON
        //EditorGUILayout.PropertyField(btn_overrideEventsFile, new GUIContent("Override Events File"));

        ////SLIDER DAYS
        //EditorGUILayout.PropertyField(sliderDaysButtons, new GUIContent("Slider of Day of the Month"), true);
        //EditorGUILayout.PropertyField(sliderMonthsButtons, new GUIContent("Slider of Month of the year"), true);
        //EditorGUILayout.PropertyField(sliderYearsButtons, new GUIContent("Slider of Years"), true);

        //// EVENTS SCROLLBAR
        //EditorGUILayout.PropertyField(eventScollbar, new GUIContent("Event Visualizer"));
        //EditorGUILayout.PropertyField(eventsScrollView, new GUIContent("Events Scroll View"));
        //EditorGUILayout.PropertyField(event_Visualizer_backButton, new GUIContent("Event visualizer back button"));
        //EditorGUILayout.PropertyField(visualizer_Content, new GUIContent("visualizer_Content"));
        //EditorGUILayout.PropertyField(visualizer_Prefab, new GUIContent("visualizer_Prefab"));

        //// CHANGE YEAR 
        //EditorGUILayout.PropertyField(btnNextYear, new GUIContent("Next Year Button"));
        //EditorGUILayout.PropertyField(btnPrevYear, new GUIContent("Prev Year Button"));
        //// CHANGE MONTH 
        //EditorGUILayout.PropertyField(btnNextMonth, new GUIContent("Next Month Button"));
        //EditorGUILayout.PropertyField(btnPrevMonth, new GUIContent("Prev Month Button"));
        //// RESET CALENDAR 
        //EditorGUILayout.PropertyField(btnCalendar, new GUIContent("Calendar Button"));
        //// SHOW EVENTS
        //EditorGUILayout.PropertyField(btnEvents, new GUIContent("Events Button"));

        //// DISPLAY LABEL
        //EditorGUILayout.PropertyField(labelYear, new GUIContent("Year Label"));
        //EditorGUILayout.PropertyField(daysOfWeek_events_label, new GUIContent("DaysOfWeek events label"), true);
        //EditorGUILayout.PropertyField(labelMonth, new GUIContent("Month Label"));
        //EditorGUILayout.PropertyField(labelDayOfWeek, new GUIContent("Day Of Week Label"));
        //EditorGUILayout.PropertyField(labelDayNumber, new GUIContent("Day Number Label"));
        //EditorGUILayout.PropertyField(labelNumberEvents, new GUIContent("Events Number Label"));

        ////DISPLAY ADD EVENTS CMOPONENTS
        //EditorGUILayout.PropertyField(btnAddEvent, new GUIContent("Buttons AddEvent"), true);
        //EditorGUILayout.PropertyField(addEventVisualizer, new GUIContent("AddEvent Box"));
        //EditorGUILayout.PropertyField(field_TimeSlider, new GUIContent("Time Slider"), true);
        //EditorGUILayout.PropertyField(field_timeError, new GUIContent("Time Error "));

        //EditorGUILayout.PropertyField(fieldName, new GUIContent("Set Name Field"));

        //EditorGUILayout.PropertyField(scrollRects, new GUIContent("Scrolls Rect"), true);
        //EditorGUILayout.PropertyField(add_event_labels, new GUIContent("Add Event labels"), true);
        //EditorGUILayout.PropertyField(label_Date, new GUIContent("Date Label"));


        //EditorGUILayout.PropertyField(fieldDescription, new GUIContent("Set Description Field"));
        //EditorGUILayout.PropertyField(btnConfirm, new GUIContent("Confirm Button"));
        //EditorGUILayout.PropertyField(btnCancel, new GUIContent("Cancel Button"));
        //EditorGUILayout.PropertyField(eventObj, new GUIContent("Event Button"));
        //EditorGUILayout.PropertyField(eventObjcContent, new GUIContent("Event Content"));
        serializedObject.ApplyModifiedProperties();
    }
}
