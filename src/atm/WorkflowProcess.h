///////////////////////////////////////////////////////////////////////////////
///
///	\file    WorkflowProcess.h
///	\author  Paul Ullrich
///	\version August 14, 2013
///
///	<remarks>
///		Copyright 2000-2010 Paul Ullrich
///
///		This file is distributed as part of the Tempest source code package.
///		Permission is granted to use, copy, modify and distribute this
///		source code and its documentation under the terms of the GNU General
///		Public License.  This software is provided "as is" without express
///		or implied warranty.
///	</remarks>

#ifndef _WORKFLOWPROCESS_H_
#define _WORKFLOWPROCESS_H_

///////////////////////////////////////////////////////////////////////////////

class Model;

///////////////////////////////////////////////////////////////////////////////

class WorkflowProcess {

protected:
	///	<summary>
	///		Constructor.  Do not allow initialization of standalone
	///		WorkflowProcess.
	///	</summary>
	WorkflowProcess(
		Model & model
	) :
		m_model(model)
	{ }

public:
	///	<summary>
	///		Virtual destructor.
	///	</summary>
	virtual ~WorkflowProcess() { }

public:
	///	<summary>
	///		Initializer.  Called prior to model execution.
	///	</summary>
	virtual void Initialize() { }

public:
	///	<summary>
	///		Perform one explicit time step of sub-cycle frequency.
	///	</summary>
	virtual void StepExplicit(
		int iDataInitial,
		int iDataUpdate,
		double dTime,
		double dDeltaT
	) {
	}

	///	<summary>
	///		Perform one implicit time step of sub-cycle frequency.
	///	</summary>
	virtual void StepImplicit(
		int iDataInitial,
		int iDataUpdate,
		double dTime,
		double dDeltaT
	) {
	}

	///	<summary>
	///		Perform one time step after all sub-cycles are complete.
	///	</summary>
	virtual void StepAfterSubCycle(
		int iDataInitial,
		int iDataUpdate,
		int iDataWorking,
		double dTime,
		double dDeltaT
	) {
	}

protected:
	///	<summary>
	///		Reference to the model.
	///	</summary>
	Model & m_model;

};

///////////////////////////////////////////////////////////////////////////////

#endif

