#ifndef ENTERBOX_H
#define ENTERBOX_H

#include <QWidget>
#include <QStringList>
#include <QTextStream>

#include "nm_value.h"
#include "ui_EnterBox.h"

///Виджет, предназначенный для ввода размерных физических величин.
/**
Виджет позволяет производить ввод значений физических величин, используя различные единицы измерения.
Виджет может иметь несколько представлений в зависимости от значения, которое принимает expansion, и состоит из следующих подвиджетов:\n

<table>
<CAPTION>  Возможные представления виджета EnterBox </CAPTION>

<tr>
 <td> <b> \ref expansion </b> 
 </td> <td> <b> тип размерности </b> </td>
 <td> <b> пояснение </b>  </td>
 <td> <b> окно ввода  </b> </td>
 <td> <b> единица измерения </b> </td> 
</tr>

<tr> <td> 3 </td> <td> Тип размерности </td> <td> пояснение  </td> <td> окно ввода </td> <td> единица измерения </td> </tr>
<tr> <td> 2 </td> <td> </td> <td> пояснение  </td> <td> окно ввода </td> <td> единица измерения </td> </tr>
<tr> <td> 1 </td> <td> </td><td> </td><td> окно ввода </td> <td> единица измерения </td> </tr>
<tr> <td> 0 </td> <td> </td><td> </td><td> окно ввода [единица измерения] </td><td> </td>  </tr>
</table>
Где:
	- Тип размерности - это ComboBox, тип физической величины;
	- Пояснение - это Label, для отображения обозначения, вводимой величины;
	- Окно ввода - это LineEdit, в котором можно вводить значения;
	- Единица измерения - это ComboBox, содержащий одно или несколько значений соответствующих типу размерности физической величины.

Тип размерности может принимать следующие значения:
	- length (длина) [m];
	- mass (масса) [kg];
	- time (время) [s];
	- electric current (сила электрического тока) [A];
	- thermodynamic temperature (термодинамическая температура) [K];
	- amount of substance (количество вещества) [mol];
	- luminous intensity ;
	- area (площадь) [m2];
	- volume (объём) [m3];
	- speed (скорость) [m/s];
	- acceleration (ускорение) [m/s2];
	- wave number (волновое число) [1/m];
	- mass density (плотность) [kg/m3];
	- specific volume (удельный объем) [m3/kg];
	- current density ;
	- magnetic field strength ;
	- concentration;
	- luminance;
	- mass fraction;
	- plane angle;
	- solid angle;
	- frequency;
	- force (сила) [H];
	- pressure (давление) [Pa];
	- stress  (напряжение) [Pa];
	- energy ;
	- work (работа) [J];
	- quantity of heat;
	- power (мощность) [W];
	- radiant flux;
	- electric charge;
	- quantity of electricity;
	- electric potential difference;
	- electromotive force;
	- capacitance;
	- electric resistance;
	- electric conductance;
	- magnetic flux;
	- magnetic flux density;
	- inductance;
	- Celsius temperature;
	- luminous flux;
	- illuminance;
	- activity (of a radionuclide);
	- absorbed dose;
	- specific energy (imparted);
	- kerma;
	- dose equivalent;
	- catalytic activity;
	- dynamic viscosity;
	- moment of force;
	- surface tension;
	- angular velocity;
	- angular acceleration;
	- heat flux density;
	- irradiance;
	- heat capacity;
	- entropy;
	- specific heat capacity;
	- specific entropy;
	- specific energy;
	- thermal conductivity;
	- energy density;
	- electric field strength;
	- electric charge density;
	- electric flux density;
	- permittivity;
	- permeability;
	- molar energy;
	- molar entropy;
	- molar heat capacity;
	- exposure (x and gamma rays);
	- absorbed dose rate;
	- radiant intensity;
	- radiance;
	- catalytic (activity) concentration.
	
Функция \ref printValueType выводит этот список на консоль.\n

Окно ввода \n
Формат данных в окне ввода имеет следуюший формат: \n
	- 1) число[размерность];
	- 2) число.

Где:
	- число - вещественное число;
	- размерность представляется в виде произведения или отношения единиц измерения (Еи) возведенных в положительную степень (С):
		- Еи [m];
		- ЕиС [m2];
		- ЕиС*ЕиС [m*s];
		- 1/ЕиС [1/s];
		- ЕиС/ЕиС [m/s2].

Единица измерения - это ComboBox, содержащий одно или несколько значений соответствующих типу размерности физической величины \n

 */
#include "enterbox_lib_global.h"

class ENTERBOX_EXPORT EnterBox: public QWidget
{
Q_OBJECT
	
public:
	EnterBox(QWidget *parent = 0, const nm_value & aVal=nm_value(0), int exp=0, bool lock_Type=false);

	void printValueType();															///<Вывод отладочной информации на стандартный вывод.
	void printValueDimension();													///<Вывод отладочной информации на стандартный вывод.

	QString outValue(void);															///<Вывод отладочной информации на стандартный вывод.


	virtual QSize sizeHint () const;
	
	nm_value getVal() const ;														///<Возвращает значение числа с размерностью.

	void setVal(const nm_value & aVal=nm_value(0)) ;		///<Устанавливает значение для числа с размерностью.
	
public slots:
	void setExpansion(int);															///<Задает режим отображения виджета.

	void setValue(const QString & str);									///<Задает значение в окне.
	QString getValue() const;														///<Возвращает содержимое окна ввода.
	
	void setValueType(const QString & str);							///<Задает тип величины.
	QString getValueType() const;												///<Возвращает тип величины.
	
	void setValueDimension(const QString & str);				///<Задает размерность.
	QString getValueDimension() const;									///<Возвращает размерность.
	
	void setDescription(const QString & str);						///<Задает строку в поле пояснения.
	QString getDescription() const;											///<Возвращает строку в поле пояснения.
	
	void setVisibleValueType(bool visible);							///<Отображение|скрытие выпадающего списка с наименованиями размерностей.
	void setHiddenValueType(bool hidden);								///<Скрытие|отображение выпадающего списка с наименованиями размерностей.
	
	void setVisibleDescription(bool visible);						///<Отображение|скрытие поясняющей надписи.
	void setHiddenDescription(bool hidden);							///<Скрытие|отображение поясняющей надписи.
	
	void setVisibleValueDimension(bool visible);				///<Отображение|скрытие выпадающего списка размерностей.
	void setHiddenValueDimension(bool hidden);					///<Скрытие|отображение выпадающего списка размерностей.
	
	void setLockValueChangedSignal(bool aVal);
	bool getLockValueChangedSignal();
signals:
	void valueChanged(nm_value aVal);
	
private slots:
	void on_pbLeftArrow_clicked();
	void on_pbRightArrow_clicked();
	void on_cbValueType_currentIndexChanged(QString );	
	void on_cbValueDimension_currentIndexChanged(QString );
	void on_leValue_returnPressed();
	void on_leValue_editingFinished(); ///
	
private:
	
	nm_value val;																				///<Представляет значение физической величины.

	bool lockValueType;																	///<Признак блокировки типа величины.

	bool lockValueChangedSignal;												///<Блокировка подачи сигнала об изменении значения.

	QStringList lstValueTypes;													///<Выпадающий список типов физических величин.

	QStringList lstValueDimensions;											///<Выпадающий список размерностей.
	
	int expansion; 																			///<Флаг, управляющий отображением виджета.
	/**<
	Может принимать значения от 0 до 3:
	- 0 - отображается строка ввода;
	- 1 - отображается строка ввода и выпадающий список размерностей;
	- 2 - отображается строка ввода, выпадающий список размерностей  и метка, содержащая обозначение;
	- 3 - отображается строка ввода, выпадающий список размерностей, метка, содержащая обозначение, и выпадающий список типов величин.\n
	При нуле виджет полностью сжат, при трех - распахнут.
	*/

	Ui::EnterBox ui;

	static bool is_init_str_values; ///<Признак того, что произошла инизиализация строковых переменых.
	static void init_str_values(); ///<Выполняет инициализацию строковых переменных.
	
public:
	static QString
		str_dim_less,													///<Безразмерная величина.
/****************************************************************************************************/
		str_length,														///<Длина.
		str_mass,															///<Масса.
		str_time,															///<Время.
		str_electric_current,									///<Сила электрического тока.
		str_thermodynamic_temperature,				///<Термодинамическая температура.
		str_amount_of_substance,							///<Количество вещества.
		str_luminous_intensity,								///<Сила света.
/****************************************************************************************************/
		str_area,															///<Площадь.
		str_volume,														///<Объем.
		str_speed,														///<Скорость.
		str_acceleration,											///<Ускорение.
		str_wave_number,											///<Волновое число.
		str_mass_density,											///<Плотность.
		str_specific_volume,									///<Удельный объем.
		str_current_density,									///<Плотность электрического тока.
		str_magnetic_field_strength,	
		str_concentration,
		str_luminance,
		str_mass_fraction,
		
		str_plane_angle,
		str_solid_angle,
		str_frequency,
		str_force,
		str_pressure,													///<Давление.
		str_stress,														///<Напряжение.
		str_energy,														///<Энергия.
		str_work,															///<Работа.
		str_quantity_of_heat,
		str_power,														///<Мощность.
		str_radiant_flux,											///<
		str_electric_charge,									///<
		str_quantity_of_electricity,					///<
		str_electric_potential_difference,		///<
		str_electromotive_force,							///<
		str_capacitance,											///<
		str_electric_resistance,							///<
		str_electric_conductance,							///<
		str_magnetic_flux,										///<
		str_magnetic_flux_density,						///<
		str_inductance,												///<
		str_Celsius_temperature,							///<
		str_luminous_flux,										///<
		str_illuminance,											///<
		str_activity_of_a_radionuclide,				///<
		str_absorbed_dose,										///<
		str_specific_energy_imparted,					///<
		str_kerma,														///<
		str_dose_equivalent,									///<
		str_catalytic_activity,								///<
		str_dynamic_viscosity,								///<
		str_moment_of_force,									///<
		str_surface_tension,									///<
		str_angular_velocity,									///<
		str_angular_acceleration,							///<
		str_heat_flux_density,								///<
		str_irradiance,												///<
		str_heat_capacity,										///<
		str_entropy,													///<
		str_specific_heat_capacity,						///<
		str_specific_entropy,									///<
		str_specific_energy,									///<
		str_thermal_conductivity,							///<
		str_energy_density,										///<
		str_electric_field_strength,					///<
		str_electric_charge_density,					///<
		str_electric_flux_density,						///<
		str_permittivity,											///<
		str_permeability,											///<
		str_molar_energy,											///<
		str_molar_entropy,										///<
		str_molar_heat_capacity,							///<
		str_exposure_x_and_gamma_rays,				///<
		str_absorbed_dose_rate,								///<
		str_radiant_intensity,								///<
		str_radiance,													///<
		str_catalytic_activity_concentration,	///<
/****************************************************************************************************/
		str_mass_flow_rate,										///<Массовый расход.
		str_volumetric_flow,									///<Объёмный расход.
		str_flow_rate,												///<
		str_molar_weight;											///<Молекулярная масса.
private:	
	static QStringList 
		lst_dim_less,
/****************************************************************************************************/
		lst_length,
		lst_mass,
		lst_time,
		lst_electric_current,
		lst_thermodynamic_temperature,
		lst_amount_of_substance,
		lst_luminous_intensity,
/****************************************************************************************************/
		lst_area,
		lst_volume,
		lst_speed,
		lst_acceleration,
		lst_wave_number,
		lst_mass_density,
		lst_specific_volume,
		lst_current_density,
		lst_magnetic_field_strength,
		lst_concentration,
		lst_luminance,
		lst_mass_fraction,
	
		lst_plane_angle,
		lst_solid_angle,
		lst_frequency,
		lst_force,
		lst_pressure,
		lst_stress,
		lst_energy,
		lst_work,
		lst_quantity_of_heat,
		lst_power,
		lst_radiant_flux,
		lst_electric_charge,
		lst_quantity_of_electricity,
		lst_electric_potential_difference,
		lst_electromotive_force,
		lst_capacitance,
		lst_electric_resistance,
		lst_electric_conductance,
		lst_magnetic_flux,
		lst_magnetic_flux_density,
		lst_inductance,
		lst_Celsius_temperature,
		lst_luminous_flux,
		lst_illuminance,
		lst_activity_of_a_radionuclide,
		lst_absorbed_dose,
		lst_specific_energy_imparted,
		lst_kerma,
		lst_dose_equivalent,
		lst_catalytic_activity,
		lst_dynamic_viscosity,
		lst_moment_of_force,
		lst_surface_tension,
		lst_angular_velocity,
		lst_angular_acceleration,
		lst_heat_flux_density,
		lst_irradiance,
		lst_heat_capacity,
		lst_entropy,
		lst_specific_heat_capacity,
		lst_specific_entropy,
		lst_specific_energy,
		lst_thermal_conductivity,
		lst_energy_density,
		lst_electric_field_strength,
		lst_electric_charge_density,
		lst_electric_flux_density,
		lst_permittivity,
		lst_permeability,
		lst_molar_energy,
		lst_molar_entropy,
		lst_molar_heat_capacity,
		lst_exposure_x_and_gamma_rays,
		lst_absorbed_dose_rate,
		lst_radiant_intensity,
		lst_radiance,
		lst_catalytic_activity_concentration,
/****************************************************************************************************/
		lst_mass_flow_rate,
		lst_volumetric_flow,
		lst_flow_rate,
		lst_molar_weight;
};

#endif // ENTERVALUEBOX_H
