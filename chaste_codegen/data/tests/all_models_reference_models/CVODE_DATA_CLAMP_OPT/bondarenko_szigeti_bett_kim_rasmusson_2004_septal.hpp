#ifdef CHASTE_CVODE
#ifndef CELLBONDARENKO_SZIGETI_BETT_KIM_RASMUSSON_2004_SEPTALFROMCELLMLCVODEDATACLAMPOPT_HPP_
#define CELLBONDARENKO_SZIGETI_BETT_KIM_RASMUSSON_2004_SEPTALFROMCELLMLCVODEDATACLAMPOPT_HPP_

//! @file
//!
//! This source file was generated from CellML by chaste_codegen version (version omitted as unimportant)
//!
//! Model: bondarenko_2004_septum
//!
//! Processed by chaste_codegen: https://github.com/ModellingWebLab/chaste-codegen
//!     (translator: chaste_codegen, model type: CvodeCellWithDataClampOpt)
//! on (date omitted as unimportant)
//!
//! <autogenerated>

#include "ChasteSerialization.hpp"
#include <boost/serialization/base_object.hpp>
#include "AbstractStimulusFunction.hpp"
#include "AbstractCvodeCellWithDataClamp.hpp"

class Cellbondarenko_szigeti_bett_kim_rasmusson_2004_septalFromCellMLCvodeDataClampOpt : public AbstractCvodeCellWithDataClamp
{
    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive & archive, const unsigned int version)
    {
        archive & boost::serialization::base_object<AbstractCvodeCellWithDataClamp >(*this);
        
    }

    //
    // Settable parameters and readable variables
    //

public:

    boost::shared_ptr<RegularStimulus> UseCellMLDefaultStimulus();
    double GetIntracellularCalciumConcentration();
    Cellbondarenko_szigeti_bett_kim_rasmusson_2004_septalFromCellMLCvodeDataClampOpt(boost::shared_ptr<AbstractIvpOdeSolver> pOdeSolver /* unused; should be empty */, boost::shared_ptr<AbstractStimulusFunction> pIntracellularStimulus);
    ~Cellbondarenko_szigeti_bett_kim_rasmusson_2004_septalFromCellMLCvodeDataClampOpt();
    AbstractLookupTableCollection* GetLookupTableCollection();
    double GetIIonic(const std::vector<double>* pStateVariables=NULL);
    void EvaluateYDerivatives(double var_chaste_interface__environment__time, const N_Vector rY, N_Vector rDY);
    N_Vector ComputeDerivedQuantities(double var_chaste_interface__environment__time, const N_Vector & rY);
};

// Needs to be included last
#include "SerializationExportWrapper.hpp"
CHASTE_CLASS_EXPORT(Cellbondarenko_szigeti_bett_kim_rasmusson_2004_septalFromCellMLCvodeDataClampOpt)

namespace boost
{
    namespace serialization
    {
        template<class Archive>
        inline void save_construct_data(
            Archive & ar, const Cellbondarenko_szigeti_bett_kim_rasmusson_2004_septalFromCellMLCvodeDataClampOpt * t, const unsigned int fileVersion)
        {
            const boost::shared_ptr<AbstractIvpOdeSolver> p_solver = t->GetSolver();
            const boost::shared_ptr<AbstractStimulusFunction> p_stimulus = t->GetStimulusFunction();
            ar << p_solver;
            ar << p_stimulus;
        }

        template<class Archive>
        inline void load_construct_data(
            Archive & ar, Cellbondarenko_szigeti_bett_kim_rasmusson_2004_septalFromCellMLCvodeDataClampOpt * t, const unsigned int fileVersion)
        {
            boost::shared_ptr<AbstractIvpOdeSolver> p_solver;
            boost::shared_ptr<AbstractStimulusFunction> p_stimulus;
            ar >> p_solver;
            ar >> p_stimulus;
            ::new(t)Cellbondarenko_szigeti_bett_kim_rasmusson_2004_septalFromCellMLCvodeDataClampOpt(p_solver, p_stimulus);
        }

    }

}

#endif // CELLBONDARENKO_SZIGETI_BETT_KIM_RASMUSSON_2004_SEPTALFROMCELLMLCVODEDATACLAMPOPT_HPP_
#endif // CHASTE_CVODE