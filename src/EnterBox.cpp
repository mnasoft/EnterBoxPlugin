#include "EnterBox.h"

#include "EnterBox.moc" // new

// QTextStream out (stdout); При этом возникала ощибка сегментирования.
// QTextStream in (stdin); При этом возникала ощибка сегментирования.

//extern	QTextStream out ;
//extern	QTextStream in ;

	bool EnterBox::is_init_str_values=false;

	QString
	EnterBox::str_dim_less,
	EnterBox::str_length,
	EnterBox::str_mass,
	EnterBox::str_time,
	EnterBox::str_electric_current,
	EnterBox::str_thermodynamic_temperature,
	EnterBox::str_amount_of_substance,
	EnterBox::str_luminous_intensity,

	EnterBox::str_area,
	EnterBox::str_volume,
	EnterBox::str_speed,
	EnterBox::str_acceleration,
	EnterBox::str_wave_number,
	EnterBox::str_mass_density,
	EnterBox::str_specific_volume,
	EnterBox::str_current_density,
	EnterBox::str_magnetic_field_strength,
	EnterBox::str_concentration,
	EnterBox::str_luminance,
	EnterBox::str_mass_fraction,
	
	EnterBox::str_plane_angle,
	EnterBox::str_solid_angle,
	EnterBox::str_frequency,
	EnterBox::str_force,
	EnterBox::str_pressure,
	EnterBox::str_stress,
	EnterBox::str_energy,
	EnterBox::str_work,
	EnterBox::str_quantity_of_heat,
	EnterBox::str_power,
	EnterBox::str_radiant_flux,
	EnterBox::str_electric_charge,
	EnterBox::str_quantity_of_electricity,
	EnterBox::str_electric_potential_difference,
	EnterBox::str_electromotive_force,
	EnterBox::str_capacitance,
	EnterBox::str_electric_resistance,
	EnterBox::str_electric_conductance,
	EnterBox::str_magnetic_flux,
	EnterBox::str_magnetic_flux_density,
	EnterBox::str_inductance,
	EnterBox::str_Celsius_temperature,
	EnterBox::str_luminous_flux,
	EnterBox::str_illuminance,
	EnterBox::str_activity_of_a_radionuclide,
	EnterBox::str_absorbed_dose,
	EnterBox::str_specific_energy_imparted,
	EnterBox::str_kerma,
	EnterBox::str_dose_equivalent,
	EnterBox::str_catalytic_activity,
	EnterBox::str_dynamic_viscosity,
	EnterBox::str_moment_of_force,
	EnterBox::str_surface_tension,
	EnterBox::str_angular_velocity,
	EnterBox::str_angular_acceleration,
	EnterBox::str_heat_flux_density,
	EnterBox::str_irradiance,
	EnterBox::str_heat_capacity,
	EnterBox::str_entropy,
	EnterBox::str_specific_heat_capacity,
	EnterBox::str_specific_entropy,
	EnterBox::str_specific_energy,
	EnterBox::str_thermal_conductivity,
	EnterBox::str_energy_density,
	EnterBox::str_electric_field_strength,
	EnterBox::str_electric_charge_density,
	EnterBox::str_electric_flux_density,
	EnterBox::str_permittivity,
	EnterBox::str_permeability,
	EnterBox::str_molar_energy,
	EnterBox::str_molar_entropy,
	EnterBox::str_molar_heat_capacity,
	EnterBox::str_exposure_x_and_gamma_rays,
	EnterBox::str_absorbed_dose_rate,
	EnterBox::str_radiant_intensity,
	EnterBox::str_radiance,
	EnterBox::str_catalytic_activity_concentration,
/****************************************************************************************************/
	EnterBox::str_mass_flow_rate,
	EnterBox::str_volumetric_flow,
	EnterBox::str_flow_rate,
	EnterBox::str_molar_weight;

	
	QStringList 
	EnterBox::lst_dim_less,
	EnterBox::lst_length,
	EnterBox::lst_mass,
	EnterBox::lst_time,
	EnterBox::lst_electric_current,
	EnterBox::lst_thermodynamic_temperature,
	EnterBox::lst_amount_of_substance,
	EnterBox::lst_luminous_intensity,
/****************************************************************************************************/
	EnterBox::lst_area,
	EnterBox::lst_volume,
	EnterBox::lst_speed,
	EnterBox::lst_acceleration,
	EnterBox::lst_wave_number,
	EnterBox::lst_mass_density,
	EnterBox::lst_specific_volume,
	EnterBox::lst_current_density,
	EnterBox::lst_magnetic_field_strength,
	EnterBox::lst_concentration,
	EnterBox::lst_luminance,
	EnterBox::lst_mass_fraction,
	
	EnterBox::lst_plane_angle,
	EnterBox::lst_solid_angle,
	EnterBox::lst_frequency,
	EnterBox::lst_force,
	EnterBox::lst_pressure,
	EnterBox::lst_stress,
	EnterBox::lst_energy,
	EnterBox::lst_work,
	EnterBox::lst_quantity_of_heat,
	EnterBox::lst_power,
	EnterBox::lst_radiant_flux,
	EnterBox::lst_electric_charge,
	EnterBox::lst_quantity_of_electricity,
	EnterBox::lst_electric_potential_difference,
	EnterBox::lst_electromotive_force,
	EnterBox::lst_capacitance,
	EnterBox::lst_electric_resistance,
	EnterBox::lst_electric_conductance,
	EnterBox::lst_magnetic_flux,
	EnterBox::lst_magnetic_flux_density,
	EnterBox::lst_inductance,
	EnterBox::lst_Celsius_temperature,
	EnterBox::lst_luminous_flux,
	EnterBox::lst_illuminance,
	EnterBox::lst_activity_of_a_radionuclide,
	EnterBox::lst_absorbed_dose,
	EnterBox::lst_specific_energy_imparted,
	EnterBox::lst_kerma,
	EnterBox::lst_dose_equivalent,
	EnterBox::lst_catalytic_activity,
	EnterBox::lst_dynamic_viscosity,
	EnterBox::lst_moment_of_force,
	EnterBox::lst_surface_tension,
	EnterBox::lst_angular_velocity,
	EnterBox::lst_angular_acceleration,
	EnterBox::lst_heat_flux_density,
	EnterBox::lst_irradiance,
	EnterBox::lst_heat_capacity,
	EnterBox::lst_entropy,
	EnterBox::lst_specific_heat_capacity,
	EnterBox::lst_specific_entropy,
	EnterBox::lst_specific_energy,
	EnterBox::lst_thermal_conductivity,
	EnterBox::lst_energy_density,
	EnterBox::lst_electric_field_strength,
	EnterBox::lst_electric_charge_density,
	EnterBox::lst_electric_flux_density,
	EnterBox::lst_permittivity,
	EnterBox::lst_permeability,
	EnterBox::lst_molar_energy,
	EnterBox::lst_molar_entropy,
	EnterBox::lst_molar_heat_capacity,
	EnterBox::lst_exposure_x_and_gamma_rays,
	EnterBox::lst_absorbed_dose_rate,
	EnterBox::lst_radiant_intensity,
	EnterBox::lst_radiance,
	EnterBox::lst_catalytic_activity_concentration,

	EnterBox::lst_mass_flow_rate,	//		kg/s
	EnterBox::lst_volumetric_flow,	//		m3/s
	EnterBox::lst_flow_rate,	//		mol/s
	EnterBox::lst_molar_weight;	//		kg/mol

EnterBox::EnterBox(QWidget *parent , const nm_value & aVal, int exp, bool lock_Type)
	:	QWidget(parent),
		val(aVal),
		expansion(exp)
{
	lockValueChangedSignal=true;
	lockValueType=lock_Type;
	ui.setupUi(this);
	init_str_values();
	{
		lstValueTypes<<str_dim_less;
		lstValueTypes<<str_length;
		lstValueTypes<<str_mass;
		lstValueTypes<<str_time;
		lstValueTypes<<str_electric_current;
		lstValueTypes<<str_thermodynamic_temperature;
		lstValueTypes<<str_amount_of_substance;
		lstValueTypes<<str_luminous_intensity;
/****************************************************************************************************/
		lstValueTypes<<str_area;
		lstValueTypes<<str_volume;
		lstValueTypes<<str_speed;
		lstValueTypes<<str_acceleration;
		lstValueTypes<<str_wave_number;
		lstValueTypes<<str_mass_density;
		lstValueTypes<<str_specific_volume;
		lstValueTypes<<str_current_density;
		lstValueTypes<<str_magnetic_field_strength;
		lstValueTypes<<str_concentration;
		lstValueTypes<<str_luminance;
		lstValueTypes<<str_mass_fraction;
		
		lstValueTypes<<str_plane_angle;
		lstValueTypes<<str_solid_angle;
		lstValueTypes<<str_frequency;
		lstValueTypes<<str_force;
		lstValueTypes<<str_pressure;
		lstValueTypes<<str_stress;
		lstValueTypes<<str_energy;
		lstValueTypes<<str_work;
		lstValueTypes<<str_quantity_of_heat;
		lstValueTypes<<str_power;
		lstValueTypes<<str_radiant_flux;
		lstValueTypes<<str_electric_charge;
		lstValueTypes<<str_quantity_of_electricity;
		lstValueTypes<<str_electric_potential_difference;
		lstValueTypes<<str_electromotive_force;
		lstValueTypes<<str_capacitance;
		lstValueTypes<<str_electric_resistance;
		lstValueTypes<<str_electric_conductance;
		lstValueTypes<<str_magnetic_flux;
		lstValueTypes<<str_magnetic_flux_density;
		lstValueTypes<<str_inductance;
		lstValueTypes<<str_Celsius_temperature;
		lstValueTypes<<str_luminous_flux;
		lstValueTypes<<str_illuminance;
		lstValueTypes<<str_activity_of_a_radionuclide;
		lstValueTypes<<str_absorbed_dose;
		lstValueTypes<<str_specific_energy_imparted;
		lstValueTypes<<str_kerma;
		lstValueTypes<<str_dose_equivalent;
		lstValueTypes<<str_catalytic_activity;
		lstValueTypes<<str_dynamic_viscosity;
		lstValueTypes<<str_moment_of_force;
		lstValueTypes<<str_surface_tension;
		lstValueTypes<<str_angular_velocity;
		lstValueTypes<<str_angular_acceleration;
		lstValueTypes<<str_heat_flux_density;
		lstValueTypes<<str_irradiance;
		lstValueTypes<<str_heat_capacity;
		lstValueTypes<<str_entropy;
		lstValueTypes<<str_specific_heat_capacity;
		lstValueTypes<<str_specific_entropy;
		lstValueTypes<<str_specific_energy;
		lstValueTypes<<str_thermal_conductivity;
		lstValueTypes<<str_energy_density;
		lstValueTypes<<str_electric_field_strength;
		lstValueTypes<<str_electric_charge_density;
		lstValueTypes<<str_electric_flux_density;
		lstValueTypes<<str_permittivity;
		lstValueTypes<<str_permeability;
		lstValueTypes<<str_molar_energy;
		lstValueTypes<<str_molar_entropy;
		lstValueTypes<<str_molar_heat_capacity;
		lstValueTypes<<str_exposure_x_and_gamma_rays;
		lstValueTypes<<str_absorbed_dose_rate;
		lstValueTypes<<str_radiant_intensity;
		lstValueTypes<<str_radiance;
		lstValueTypes<<str_catalytic_activity_concentration;
/************************************************************************************************************************/
		lstValueTypes<<str_mass_flow_rate;
		lstValueTypes<<str_volumetric_flow;
		lstValueTypes<<str_flow_rate,
		lstValueTypes<<str_molar_weight;

		ui.cbValueType->clear();
		ui.cbValueType->insertItems ( ui.cbValueType->count(), lstValueTypes );
	}
//	QStringList lstValueDimensions;
	setExpansion(expansion);
	setVal(aVal); 
}


/**
Если при этом значение числа изменилось вызывается сигнал.
*/
void EnterBox::setValue(const QString & str)
{
	ui.leValue->setText( str );
}

void EnterBox::setValueType(const QString & str)
{
	int index=ui.cbValueType->findText ( str ) ;
	ui.cbValueType-> setCurrentIndex ( index );
}
void EnterBox::setValueDimension(const QString & str)
{
	int index=ui.cbValueDimension->findText ( str ) ;
	ui.cbValueDimension-> setCurrentIndex ( index );
}

void EnterBox::setDescription(const QString & str)
{
	ui.lblDescription->setText( str );
}

void EnterBox::init_str_values()
{
	if (is_init_str_values) return;
	else is_init_str_values=true;
	
	str_dim_less=QString::fromUtf8("dim less");
	lst_dim_less<<QString::fromUtf8("");
	
	str_length=QString::fromUtf8("length");
	lst_length<<QString::fromUtf8("ua");
	lst_length<<QString::fromUtf8("Mm");
	lst_length<<QString::fromUtf8("km");
	lst_length<<QString::fromUtf8("hm");
	lst_length<<QString::fromUtf8("dam");
	lst_length<<QString::fromUtf8("m");
	lst_length<<QString::fromUtf8("dm");
	lst_length<<QString::fromUtf8("cm");
	lst_length<<QString::fromUtf8("mm");
	lst_length<<QString::fromUtf8("μm");
	lst_length<<QString::fromUtf8("Å");
	
	str_mass=QString::fromUtf8("mass");
	lst_mass<<QString::fromUtf8("Gt");
	lst_mass<<QString::fromUtf8("Mt");
	lst_mass<<QString::fromUtf8("kt");
	lst_mass<<QString::fromUtf8("t");
	lst_mass<<QString::fromUtf8("kg");
	lst_mass<<QString::fromUtf8("g");
	lst_mass<<QString::fromUtf8("mg");
	lst_mass<<QString::fromUtf8("μg");
	lst_mass<<QString::fromUtf8("u");


	str_time=QString::fromUtf8("time");
	lst_time<<QString::fromUtf8("d");
	lst_time<<QString::fromUtf8("h");
	lst_time<<QString::fromUtf8("min");
	lst_time<<QString::fromUtf8("s");
	lst_time<<QString::fromUtf8("ms");
	lst_time<<QString::fromUtf8("μs");
		
	str_electric_current=QString::fromUtf8("electric current");
	lst_electric_current<<QString::fromUtf8("kA");
	lst_electric_current<<QString::fromUtf8("A");
	lst_electric_current<<QString::fromUtf8("mA");
	
	str_thermodynamic_temperature=QString::fromUtf8("temperature");
	lst_thermodynamic_temperature<<QString::fromUtf8("K");
	
	str_amount_of_substance=QString::fromUtf8("amount of substance");
	lst_amount_of_substance<<QString::fromUtf8("Mmol");
	lst_amount_of_substance<<QString::fromUtf8("kmol");
	lst_amount_of_substance<<QString::fromUtf8("mol");
	lst_amount_of_substance<<QString::fromUtf8("mmol");
		
	str_luminous_intensity=QString::fromUtf8("luminous intensity");
	lst_luminous_intensity<<QString::fromUtf8("cd");	
/****************************************************************************************************/
	str_area=QString::fromUtf8("area");
	lst_area<<QString::fromUtf8("km2");
	lst_area<<QString::fromUtf8("ha");
	lst_area<<QString::fromUtf8("a");
	lst_area<<QString::fromUtf8("m2");
	lst_area<<QString::fromUtf8("dm2");
	lst_area<<QString::fromUtf8("cm2");
	lst_area<<QString::fromUtf8("mm2");
	lst_area<<QString::fromUtf8("b");
	
	str_volume=QString::fromUtf8("volume");
	lst_volume<<QString::fromUtf8("km3");
	lst_volume<<QString::fromUtf8("m3");
	lst_volume<<QString::fromUtf8("dm3");
	lst_volume<<QString::fromUtf8("cm3");
	lst_volume<<QString::fromUtf8("mm3");
	
	str_speed=QString::fromUtf8("velocity");
	lst_speed<<QString::fromUtf8("km/s");
	lst_speed<<QString::fromUtf8("knot");
	lst_speed<<QString::fromUtf8("km/h");
	lst_speed<<QString::fromUtf8("m/s");
	lst_speed<<QString::fromUtf8("m/min");
	lst_speed<<QString::fromUtf8("m/h");
	
	str_acceleration=QString::fromUtf8("acceleration");
	lst_acceleration<<QString::fromUtf8("km/s2");
	lst_acceleration<<QString::fromUtf8("m/s2");
	lst_acceleration<<QString::fromUtf8("Gal");
	
	str_wave_number=QString::fromUtf8("wave number");
	lst_wave_number<<QString::fromUtf8("1/km");
	lst_wave_number<<QString::fromUtf8("1/m");
	lst_wave_number<<QString::fromUtf8("1/mm");	
	
	str_mass_density=QString::fromUtf8("mass density");
	lst_mass_density<<QString::fromUtf8("kg/cm3");
	lst_mass_density<<QString::fromUtf8("kg/m3");
	lst_mass_density<<QString::fromUtf8("g/cm3");
	
	str_specific_volume=QString::fromUtf8("specific volume");
	lst_specific_volume<<QString::fromUtf8("cm3/kg");
	lst_specific_volume<<QString::fromUtf8("m3/kg");
	lst_specific_volume<<QString::fromUtf8("cm3/g");
	
	str_current_density=QString::fromUtf8("current density");
	lst_current_density<<QString::fromUtf8("A/m2");
	lst_current_density<<QString::fromUtf8("A/mm2");
	
	str_magnetic_field_strength=QString::fromUtf8("magnetic field strength");
	lst_magnetic_field_strength<<QString::fromUtf8("A/m");
	
	str_concentration=QString::fromUtf8("concentration");
	lst_concentration<<QString::fromUtf8("kmol/m3");
	lst_concentration<<QString::fromUtf8("mol/m3");

	str_luminance=QString::fromUtf8("luminance");
	lst_luminance<<QString::fromUtf8("kcd/m2");
	lst_luminance<<QString::fromUtf8("cd/m2");
	
	str_mass_fraction=QString::fromUtf8("mass fraction");
	lst_mass_fraction<<QString::fromUtf8("kg/kg");	
/****************************************************************************************************/
	str_plane_angle=QString::fromUtf8("plane angle");
//	lst_plane_angle<<QString::fromUtf8("m/m");
	lst_plane_angle<<QString::fromUtf8("rad");
	
	str_solid_angle=QString::fromUtf8("solid angle");
//	lst_solid_angle<<QString::fromUtf8("m2/m2");
	lst_solid_angle<<QString::fromUtf8("sr");
	
	str_frequency=QString::fromUtf8("frequency");
	lst_frequency<<QString::fromUtf8("1/s");
	lst_frequency<<QString::fromUtf8("MHz");
	lst_frequency<<QString::fromUtf8("kHz");
	lst_frequency<<QString::fromUtf8("Hz");
	
	str_force=QString::fromUtf8("force");
	lst_force<<QString::fromUtf8("Mts");
	lst_force<<QString::fromUtf8("MN");
	lst_force<<QString::fromUtf8("ts");
	lst_force<<QString::fromUtf8("kN");
	lst_force<<QString::fromUtf8("kgs");
	lst_force<<QString::fromUtf8("N");
	lst_force<<QString::fromUtf8("gs");
	
	str_pressure=QString::fromUtf8("pressure");
	lst_pressure<<QString::fromUtf8("kgs/mm2");
	lst_pressure<<QString::fromUtf8("MPa");
	lst_pressure<<QString::fromUtf8("bar");
	lst_pressure<<QString::fromUtf8("atm");
	lst_pressure<<QString::fromUtf8("kgs/cm2");
	lst_pressure<<QString::fromUtf8("kPa");
	lst_pressure<<QString::fromUtf8("Torr");
	lst_pressure<<QString::fromUtf8("Pa");
	
	str_stress=QString::fromUtf8("stress");
	lst_stress<<QString::fromUtf8("kgs/mm2");
	lst_stress<<QString::fromUtf8("MPa");
	lst_stress<<QString::fromUtf8("Pa");
	
	str_energy=QString::fromUtf8("energy");
	lst_energy<<QString::fromUtf8("Gcal");
	lst_energy<<QString::fromUtf8("GJ");
	lst_energy<<QString::fromUtf8("Mcal");
	lst_energy<<QString::fromUtf8("MJ");
	lst_energy<<QString::fromUtf8("kcal");
	lst_energy<<QString::fromUtf8("kJ");
	lst_energy<<QString::fromUtf8("cal");
	lst_energy<<QString::fromUtf8("J");
	
	str_work=QString::fromUtf8("work");
	lst_work<<QString::fromUtf8("Gcal");
	lst_work<<QString::fromUtf8("GJ");
	lst_work<<QString::fromUtf8("Mcal");
	lst_work<<QString::fromUtf8("MJ");
	lst_work<<QString::fromUtf8("kcal");
	lst_work<<QString::fromUtf8("kJ");
	lst_work<<QString::fromUtf8("cal");
	lst_work<<QString::fromUtf8("J");
	
	str_quantity_of_heat=QString::fromUtf8("quantity of heat");
	lst_quantity_of_heat<<QString::fromUtf8("Gcal");
	lst_quantity_of_heat<<QString::fromUtf8("GJ");
	lst_quantity_of_heat<<QString::fromUtf8("Mcal");
	lst_quantity_of_heat<<QString::fromUtf8("MJ");
	lst_quantity_of_heat<<QString::fromUtf8("kcal");
	lst_quantity_of_heat<<QString::fromUtf8("kJ");
	lst_quantity_of_heat<<QString::fromUtf8("cal");
	lst_quantity_of_heat<<QString::fromUtf8("J");	
	
	str_power=QString::fromUtf8("power");
	lst_power<<QString::fromUtf8("GW");
	lst_power<<QString::fromUtf8("MW");
	lst_power<<QString::fromUtf8("kW");
	lst_power<<QString::fromUtf8("W");
	
	str_radiant_flux=QString::fromUtf8("radiant flux");
	lst_radiant_flux<<QString::fromUtf8("GW");
	lst_radiant_flux<<QString::fromUtf8("MW");
	lst_radiant_flux<<QString::fromUtf8("kW");
	lst_radiant_flux<<QString::fromUtf8("W");
	
	str_electric_charge=QString::fromUtf8("electric charge");
	lst_electric_charge<<QString::fromUtf8("C");
	
	str_quantity_of_electricity=QString::fromUtf8("quantity of electricity");
	lst_quantity_of_electricity<<QString::fromUtf8("C");
	
	str_electric_potential_difference=QString::fromUtf8("electric potential difference");
	lst_electric_potential_difference<<QString::fromUtf8("MV");
	lst_electric_potential_difference<<QString::fromUtf8("kV");
	lst_electric_potential_difference<<QString::fromUtf8("V");
	lst_electric_potential_difference<<QString::fromUtf8("mV");
	
	str_electromotive_force=QString::fromUtf8("electromotive force");
	lst_electromotive_force<<QString::fromUtf8("MV");
	lst_electromotive_force<<QString::fromUtf8("kV");
	lst_electromotive_force<<QString::fromUtf8("V");
	lst_electromotive_force<<QString::fromUtf8("mV");
	
	str_capacitance=QString::fromUtf8("capacitance");
	lst_capacitance<<QString::fromUtf8("F");
	lst_capacitance<<QString::fromUtf8("mF");
	lst_capacitance<<QString::fromUtf8("μF");
	
	str_electric_resistance=QString::fromUtf8("electric resistance");
	lst_electric_resistance<<QString::fromUtf8("MΩ");
	lst_electric_resistance<<QString::fromUtf8("kΩ");
	lst_electric_resistance<<QString::fromUtf8("Ω");
	
	str_electric_conductance=QString::fromUtf8("electric conductance");
	lst_electric_conductance<<QString::fromUtf8("S");
	lst_electric_conductance<<QString::fromUtf8("mS");
	lst_electric_conductance<<QString::fromUtf8("μS");
	
	str_magnetic_flux=QString::fromUtf8("magnetic flux");
	lst_magnetic_flux<<QString::fromUtf8("Wb");	
	
	str_magnetic_flux_density=QString::fromUtf8("magnetic flux density");
	lst_magnetic_flux_density<<QString::fromUtf8("T");
	
	str_inductance=QString::fromUtf8("inductance");
	lst_inductance<<QString::fromUtf8("H");
	
	str_Celsius_temperature=QString::fromUtf8("Celsius temperature"); /************************************/
	
	str_luminous_flux=QString::fromUtf8("luminous flux");
	lst_luminous_flux<<QString::fromUtf8("lm");	
	
	str_illuminance=QString::fromUtf8("illuminance");
	lst_illuminance<<QString::fromUtf8("lx");	
	
	str_activity_of_a_radionuclide=QString::fromUtf8("activity (of a radionuclide)");
	lst_activity_of_a_radionuclide<<QString::fromUtf8("Bq");
	
	str_absorbed_dose=QString::fromUtf8("absorbed dose");
	lst_absorbed_dose<<QString::fromUtf8("Gy");	
	
	str_specific_energy_imparted=QString::fromUtf8("specific energy (imparted)");
	lst_specific_energy_imparted<<QString::fromUtf8("Gy");	
	
	str_kerma=QString::fromUtf8("kerma");
	lst_kerma<<QString::fromUtf8("Gy");	
	
	str_dose_equivalent=QString::fromUtf8("dose equivalent");
	lst_dose_equivalent<<QString::fromUtf8("Sv");	
	
	str_catalytic_activity=QString::fromUtf8("catalytic activity");
	lst_catalytic_activity<<QString::fromUtf8("kat");
	
	str_dynamic_viscosity=QString::fromUtf8("dynamic viscosity");
	lst_dynamic_viscosity<<QString::fromUtf8("Pa*s");	
	
	str_moment_of_force=QString::fromUtf8("moment of force");
	lst_moment_of_force<<QString::fromUtf8("kN*m");
	lst_moment_of_force<<QString::fromUtf8("kgf*m");
	lst_moment_of_force<<QString::fromUtf8("N*m");
	lst_moment_of_force<<QString::fromUtf8("kgf*cm");
	lst_moment_of_force<<QString::fromUtf8("N*cm");
	
	str_surface_tension=QString::fromUtf8("surface tension");
	lst_surface_tension<<QString::fromUtf8("N/m");
	
	str_angular_velocity=QString::fromUtf8("angular velocity");
	lst_angular_velocity<<QString::fromUtf8("rad/s");	
	
	str_angular_acceleration=QString::fromUtf8("angular acceleration");
	lst_angular_acceleration<<QString::fromUtf8("rad/s2");
	
	str_heat_flux_density=QString::fromUtf8("heat flux density");
	lst_heat_flux_density<<QString::fromUtf8("W/m2");
	
	str_irradiance=QString::fromUtf8("irradiance");
	lst_irradiance<<QString::fromUtf8("W/m2");

	str_heat_capacity=QString::fromUtf8("heat capacity");
	lst_heat_capacity<<QString::fromUtf8("J/K");
	
	str_entropy=QString::fromUtf8("entropy");
	lst_entropy<<QString::fromUtf8("J/K");
	
	str_specific_heat_capacity=QString::fromUtf8("specific heat capacity");
	lst_specific_heat_capacity<<QString::fromUtf8("J/kg*K");
	
	str_specific_entropy=QString::fromUtf8("specific entropy");
	lst_specific_entropy<<QString::fromUtf8("J/kg*K");
	
	str_specific_energy=QString::fromUtf8("specific energy");
	lst_specific_energy<<QString::fromUtf8("J/kg");
	
	str_thermal_conductivity=QString::fromUtf8("thermal conductivity");
	lst_thermal_conductivity<<QString::fromUtf8("W/m*K");
		
	str_energy_density=QString::fromUtf8("energy density");
	lst_energy_density<<QString::fromUtf8("J/m3");
	
	str_electric_field_strength=QString::fromUtf8("electric field strength");
	lst_electric_field_strength<<QString::fromUtf8("V/m");
			
	str_electric_charge_density=QString::fromUtf8("electric charge density");
	lst_electric_charge_density<<QString::fromUtf8("С/m3");
	
	str_electric_flux_density=QString::fromUtf8("electric flux density");
	lst_electric_flux_density<<QString::fromUtf8("С/m2");
	
	str_permittivity=QString::fromUtf8("permittivity");
	lst_permittivity<<QString::fromUtf8("F/m");	
	
	str_permeability=QString::fromUtf8("permeability");
	lst_permeability<<QString::fromUtf8("H/m");
		
	
	str_molar_energy=QString::fromUtf8("molar energy");
	lst_molar_energy<<QString::fromUtf8("J/mol");
			
	str_molar_entropy=QString::fromUtf8("molar entropy");
	lst_molar_entropy<<QString::fromUtf8("J/mol");
	
	str_molar_heat_capacity=QString::fromUtf8("molar heat capacity");
	lst_molar_heat_capacity<<QString::fromUtf8("J/mol");
	
	str_exposure_x_and_gamma_rays=QString::fromUtf8("exposure (x and gamma rays)");
	lst_exposure_x_and_gamma_rays<<QString::fromUtf8("C/kg");

	str_absorbed_dose_rate=QString::fromUtf8("absorbed dose rate");
	lst_absorbed_dose_rate<<QString::fromUtf8("Gy/s");	
	
	str_radiant_intensity=QString::fromUtf8("radiant intensity");
	lst_radiant_intensity<<QString::fromUtf8("W/sr");
	
	str_radiance=QString::fromUtf8("radiance");
	lst_radiance<<QString::fromUtf8("W/m2*sr");
	
	str_catalytic_activity_concentration=QString::fromUtf8("catalytic (activity) concentration");
	lst_catalytic_activity_concentration<<QString::fromUtf8("kat/m3");

	str_mass_flow_rate=QString::fromUtf8("mass flow rate");
	lst_mass_flow_rate<<QString::fromUtf8("kg/s");
	lst_mass_flow_rate<<QString::fromUtf8("g/s");	
	lst_mass_flow_rate<<QString::fromUtf8("kg/min");
	lst_mass_flow_rate<<QString::fromUtf8("g/min");
	lst_mass_flow_rate<<QString::fromUtf8("kg/h");
	lst_mass_flow_rate<<QString::fromUtf8("g/h");
	lst_mass_flow_rate<<QString::fromUtf8("kg/d");
	lst_mass_flow_rate<<QString::fromUtf8("g/d");

	str_volumetric_flow=QString::fromUtf8("volumetric flow");
	lst_volumetric_flow<<QString::fromUtf8("m3/s");
	lst_volumetric_flow<<QString::fromUtf8("dm3/s");
	lst_volumetric_flow<<QString::fromUtf8("m3/min");
	lst_volumetric_flow<<QString::fromUtf8("dm3/min");
	lst_volumetric_flow<<QString::fromUtf8("m3/h");
	lst_volumetric_flow<<QString::fromUtf8("dm3/h");
	lst_volumetric_flow<<QString::fromUtf8("m3/d");
	lst_volumetric_flow<<QString::fromUtf8("dm3/d");

	str_flow_rate=QString::fromUtf8("flow rate");
	lst_flow_rate<<QString::fromUtf8("kmol/s");
	lst_flow_rate<<QString::fromUtf8("mol/s");
	lst_flow_rate<<QString::fromUtf8("kmol/min");	
	lst_flow_rate<<QString::fromUtf8("mol/min");
	lst_flow_rate<<QString::fromUtf8("kmol/h");
	lst_flow_rate<<QString::fromUtf8("mol/h");	
	lst_flow_rate<<QString::fromUtf8("kmol/d");
	lst_flow_rate<<QString::fromUtf8("mol/d");
	
	str_molar_weight=QString::fromUtf8("molar weight");
	lst_molar_weight<<QString::fromUtf8("kg/mol");
	lst_molar_weight<<QString::fromUtf8("g/mol");
}

QString dim_last;

void EnterBox::on_cbValueDimension_currentIndexChanged(QString str)
{
	QTextStream out (stdout);
	out<<"on_cbValueDimension_currentIndexChanged"<<"\t"<<str<<endl;

	setVal(val);

/*	QString str_number;
	QString last_str, new_str;
	double number;
	nm_value last_value, new_value;
	str_number=ui.leValue->text();
	number = str_number.toDouble();
	
	last_str=QString("1")+"["+dim_last+"]";
	new_str=QString("1")+"["+str+"]";
	
	nm_value tmp_1(last_str);
	nm_value tmp_2(new_str);
	
	last_value=tmp_1;
	new_value=tmp_2;
	
	if(new_value.is_same_type(last_value))
	{
		nm_value tmp=last_value/new_value*number;
		QString str_n;
		str_n=QString::number(tmp.val);
		ui.leValue->setText(str_n);
	}
	else
	{
		ui.leValue->setText("0");
	}
	dim_last=str;
*/
}

void EnterBox::on_leValue_returnPressed()
{
	QTextStream out (stdout);
	out<<"on_leValue_returnPressed"<<endl;

	QString str_comma, str_number, str_dimension, str_val;
	//Замена запятых на точки.
	str_comma=ui.leValue->text();
	for (int i = 0; i < str_comma.size(); ++i)
	{
		if (str_comma.at(i) == QChar(',') )
		str_comma[i] = QChar('.');
	}
	//Замена запятых на точки.
	
	str_number=str_comma;
	str_dimension=ui.cbValueDimension->currentText();
	str_val=str_number+"["+str_dimension+"]";
	
	out<<str_val<<endl;	
	nm_value val_tmp(str_val);
	out << val_tmp << endl;
	setVal(val_tmp);
}

void EnterBox::on_leValue_editingFinished()
{
	QTextStream EnterBox_out (stdout);
	EnterBox_out<<"on_leValue_editingFinished"<<endl;
	on_leValue_returnPressed();
}


void EnterBox::on_cbValueType_currentIndexChanged(QString str)
{
	QTextStream out (stdout);
	out<<"on_cbValueType_currentIndexChanged"<<"\t"<<str<<endl;
	
	ui.leValue->setText("0");
	
	if(str==str_dim_less)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_dim_less );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("m")));
	}	
	else if(str==str_length)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_length );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("m")));
	}
	else if(str==str_mass)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_mass );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("kg")));
	}
	else if(str==str_time)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_time );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("s")));
	}
	else if(str==str_electric_current)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_electric_current );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("A")));
	}
	else if(str==str_thermodynamic_temperature)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_thermodynamic_temperature );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("K")));
	}
	else if(str==str_amount_of_substance)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_amount_of_substance );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("mol")));
	}
	else if(str==str_luminous_intensity)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_luminous_intensity );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("cd")));
	}
/****************************************************************************************************/
	else if(str==str_area)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_area );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("m2")));
	}
	else if(str==str_volume)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_volume );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("m3")));
	}
	else if(str==str_speed)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_speed );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("m/s")));
	}
	else if(str==str_acceleration)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_acceleration );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("m/s2")));
	}
	else if(str==str_wave_number)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_wave_number );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("1/m")));
	}
	else if(str==str_mass_density)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_mass_density );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("kg/m3")));
	}
	else if(str==str_specific_volume)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_specific_volume );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("m3/kg")));
	}
	else if(str==str_current_density)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_current_density );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("A/m2")));
	}
	else if(str==str_magnetic_field_strength)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_magnetic_field_strength );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("A/m")));
	}
	else if(str==str_concentration)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_concentration );
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("mol/m3")));
	}
	else if(str==str_luminance)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_luminance);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("cd/m2")));
	}
	else if(str==str_mass_fraction)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_mass_fraction);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("kg/kg")));
	}
	else if(str==str_plane_angle)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_plane_angle);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("rad")));
	}
	else if(str==str_solid_angle)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_solid_angle);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("sr")));
	}
	else if(str==str_frequency)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_frequency);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("Hz")));
	}
	else if(str==str_force)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_force);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("N")));
	}
	else if(str==str_pressure)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_pressure);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("Pa")));
	}
	else if(str==str_stress)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_stress);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("Pa")));
	}
	else if(str==str_energy)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_energy);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("J")));
	}
	else if(str==str_work)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_work);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("J")));
	}
	else if(str==str_quantity_of_heat)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_quantity_of_heat);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("J")));
	}
	else if(str==str_power)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_power);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("W")));
	}
	else if(str==str_radiant_flux)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_radiant_flux);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("W")));
	}
	else if(str==str_electric_charge)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_electric_charge);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("C")));
	}
	else if(str==str_quantity_of_electricity)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_quantity_of_electricity);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("C")));
	}
	else if(str==str_electric_potential_difference)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_electric_potential_difference);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("V")));
	}
	else if(str==str_electromotive_force)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_electromotive_force);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("V")));
	}
	else if(str==str_capacitance)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_capacitance);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("F")));
	}
	else if(str==str_electric_resistance)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_electric_resistance);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("Ω")));
	}
	else if(str==str_electric_conductance)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_electric_conductance);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("S")));
	}
	else if(str==str_magnetic_flux)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_magnetic_flux);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("Wb")));
	}
	else if(str==str_magnetic_flux_density)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_magnetic_flux_density);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("T")));
	}
	else if(str==str_inductance)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_inductance);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("H")));
	}
//**********************Celsius temperature********************************
	else if(str==str_luminous_flux)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_luminous_flux);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("lm")));
	}
	else if(str==str_illuminance)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_illuminance);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("lx")));
	}
	else if(str==str_activity_of_a_radionuclide)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_activity_of_a_radionuclide);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("Bq")));
	}
	else if(str==str_absorbed_dose)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_absorbed_dose);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("Gy")));
	}
	else if(str==str_specific_energy)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_specific_energy);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("Gy")));
	}
	else if(str==str_kerma)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_kerma);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("Gy")));
	}
	else if(str==str_dose_equivalent)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_dose_equivalent);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("Sv")));
	}
	else if(str==str_catalytic_activity)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_catalytic_activity);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("kat")));
	}
	else if(str==str_dynamic_viscosity)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_dynamic_viscosity);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("Pa*s")));
	}
	else if(str==str_moment_of_force)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_moment_of_force);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("N*m")));
	}
	else if(str==str_surface_tension)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_surface_tension);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("N/m")));
	}
	else if(str==str_angular_velocity)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_angular_velocity);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("rad/s")));
	}
	else if(str==str_angular_acceleration)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_angular_acceleration);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("rad/s2")));
	}
	else if(str==str_heat_flux_density)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_heat_flux_density);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("W/m2")));
	}
	else if(str==str_irradiance)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_irradiance);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("W/m2")));
	}
	else if(str==str_heat_capacity)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_heat_capacity);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("J/K")));
	}
	else if(str==str_entropy)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_entropy);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("J/K")));
	}
	else if(str==str_specific_heat_capacity)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_specific_heat_capacity);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("J/kg*K")));
	}
	else if(str==str_specific_entropy)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_specific_entropy);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("J/kg*K")));
	}
	else if(str==str_specific_energy_imparted)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_specific_energy_imparted);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("Gy")));
	}
	else if(str==str_thermal_conductivity)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_thermal_conductivity);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("W/m*K")));
	}
	else if(str==str_energy_density)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_energy_density);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("J/m3")));
	}
	else if(str==str_electric_field_strength)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_electric_field_strength);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("V/m")));
	}
	else if(str==str_electric_charge_density)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_electric_charge_density);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("С/m3")));
	}
	else if(str==str_electric_flux_density)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_electric_flux_density);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("С/m2")));
	}
	else if(str==str_permittivity)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_permittivity);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("F/m")));
	}
	else if(str==str_permeability)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_permeability);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("H/m")));
	}
	else if(str==str_molar_energy)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_molar_energy);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("J/mol")));
	}
	else if(str==str_molar_entropy)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_molar_entropy);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("J/mol")));
	}
	else if(str==str_molar_heat_capacity)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_molar_heat_capacity);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("J/mol")));
	}
	else if(str==str_exposure_x_and_gamma_rays)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_exposure_x_and_gamma_rays);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("C/kg")));
	}
	else if(str==str_absorbed_dose_rate)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_absorbed_dose_rate);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("Gy/s")));
	}
	else if(str==str_radiant_intensity)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_radiant_intensity);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("W/sr")));
	}
	else if(str==str_radiance)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_radiance);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("W/m2*sr")));
	}
	else if(str==str_catalytic_activity_concentration)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_catalytic_activity_concentration);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("kat/m3")));
	}
/**************************************************************************************************************************/
	else if(str==str_mass_flow_rate)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_mass_flow_rate);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("kg/s")));
	}
	else if(str==str_volumetric_flow)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_volumetric_flow);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("m3/s")));
	}
	else if(str==str_flow_rate)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_flow_rate);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("mol/s")));
	}
	else if(str==str_molar_weight)
	{
		ui.cbValueDimension->clear();
		ui.cbValueDimension->insertItems ( ui.cbValueDimension->count(), lst_molar_weight);
		ui.cbValueDimension->setCurrentIndex (ui.cbValueDimension->findText ( QString::fromUtf8("kg/mol")));
	}
//	ui.lblDescription->setText( str );
}


/**
	При задании соответствующего значения парамерта expans=0..3
	виджет может быть представлен в следующих вариантах:\n
	* expans=0 - окно ввода;\n
	* expans=1 - окно ввода + значение размерности;\n
	* expans=2 - пояснение + окно ввода + значение размерности;\n
	* expans=3 - наименование размерности + пояснение + окно ввода + значение размерности.
*/

void EnterBox::setExpansion(int expans/**Тип отображения*/)
{
	expansion=(expans<0)?0:((expans>3)?3:expans);
	switch(expansion)
	{
		case 0 :
			setVisibleValueType(false);
			setVisibleDescription(false);
			setVisibleValueDimension(false);
			ui.pbLeftArrow->hide();
			ui.pbRightArrow->show();
			updateGeometry();
			break;
		case 1 :
			setVisibleValueType(false);
			setVisibleDescription(false);
			setVisibleValueDimension(true);
			ui.pbLeftArrow->show();
			ui.pbRightArrow->show();
			updateGeometry();
			break;
		case 2 :
			setVisibleValueType(false);
			setVisibleDescription(true);
			setVisibleValueDimension(true);
			ui.pbLeftArrow->show();
			ui.pbRightArrow->show();
			updateGeometry();
			break;
		case 3 :
			setVisibleValueType(true);
			setVisibleDescription(true);
			setVisibleValueDimension(true);
			ui.pbLeftArrow->show();
			ui.pbRightArrow->hide();
			updateGeometry();
			break;
	}
}

void EnterBox::setVisibleValueType(bool visible)
{
	ui.cbValueType->setVisible(visible);
}

void EnterBox::setHiddenValueType(bool hidden)
{
	ui.cbValueType->setHidden(hidden);
}

void EnterBox::setVisibleDescription(bool visible)
{
	ui.lblDescription->setVisible(visible);
}

void EnterBox::setHiddenDescription(bool hidden)
{
	ui.lblDescription->setHidden(hidden);
}

void EnterBox::setVisibleValueDimension(bool visible)
{
	ui.cbValueDimension->setVisible(visible);
}

void EnterBox::setHiddenValueDimension(bool hidden)
{
	ui.cbValueDimension->setHidden(hidden);
}
void EnterBox::on_pbLeftArrow_clicked()
{
	setExpansion(--expansion);
	setVal(val);
}

void EnterBox::on_pbRightArrow_clicked()
{
	setExpansion(++expansion);
	setVal(val);
}

void EnterBox::printValueType()
{
	QTextStream out (stdout);
	for (int i = 0; i < lstValueTypes.size(); ++i)
		out << lstValueTypes.at(i) << endl;
}

QSize EnterBox::sizeHint () const
{
	QSize a;
	a.setHeight(25);
	if(expansion==0)
		a.setWidth (200);
	else if(expansion==1)
		a.setWidth (300);
	else if(expansion==2)
		a.setWidth (400);
	else if(expansion==3)
		a.setWidth (500);
	return a;
}

nm_value EnterBox::getVal() const
{
	return val;
}

void EnterBox::setVal(const nm_value & aVal) 
{
//	lockValueType;
	QString str_ValueType = ui.cbValueType->currentText();
	nm_value tmp = nm_value::get_dimension_en(str_ValueType);
	QString str_ValueDimension = ui.cbValueDimension->currentText(); //<Размерность
	str_ValueDimension = QString ("[") + str_ValueDimension + QString ("]");
	nm_value val_ValueDimension (1.0, str_ValueDimension ); //<Значение размерности  
	
	if (val == aVal)
	{
			if(val.is_same_type(aVal))//<Новое значение имеет тот же самый тип.
		{
			val = aVal;
			nm_value tmp=aVal/val_ValueDimension;
			if(ui.cbValueDimension->isVisible ())
			{
				setValue(QString::number(tmp.val));
			}
			else
			{
				setValue(QString::number(tmp.val)+str_ValueDimension);
			}
			return;
		}
	}

	if(val.is_same_type(aVal))//<Новое значение имеет тот же самый тип.
	{
		val = aVal;
		nm_value tmp=aVal/val_ValueDimension;
		if(ui.cbValueDimension->isVisible ())
		{
			setValue(QString::number(tmp.val));
		}
		else
		{
			setValue(QString::number(tmp.val)+str_ValueDimension);
		}
		if(!lockValueChangedSignal)
		{
			emit valueChanged(val);
		}
		
		return;
	}

	val = aVal;
	QString str_dim = val.get_dimension_name_en();
	setValueType(str_dim);

	str_ValueDimension = ui.cbValueDimension->currentText(); //<Размерность
	str_ValueDimension = QString ("[") + str_ValueDimension + QString ("]");
	nm_value val_ValueDimension_new (1.0, str_ValueDimension );
	
	nm_value tmp_new=aVal/val_ValueDimension_new;
	
//	if(ui.cbValueDimension->isVisible ())
	if(expansion>=1)
	{
		setValue(QString::number(tmp_new.val));
	}
	else
	{
		setValue(QString::number(tmp_new.val)+str_ValueDimension);
	}
//	setValue(QString::number(val.val));
		
	if(!lockValueChangedSignal)
	{
		emit valueChanged(val);
	}
	return;
}

QString EnterBox::getValue() const
{
	return ui.leValue->text(); 
}

QString EnterBox::getValueType() const
{
	return ui.cbValueType->currentText();
}
	

QString EnterBox::getValueDimension() const
{
	return ui.cbValueDimension->currentText();
}
	

QString EnterBox::getDescription() const
{
	return ui.lblDescription->text ();
}

void EnterBox::setLockValueChangedSignal(bool aVal)
{
	lockValueChangedSignal=aVal;
}

bool EnterBox::getLockValueChangedSignal()
{
	return lockValueChangedSignal;
}

QString EnterBox::outValue(void)
{
	QString str;
	str=getDescription()+ QString("= ") +getVal().toQString ( getValueDimension() );
	return str;
}

