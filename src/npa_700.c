#include "npa_700.h"

/** 
 * @brief Trigger NPA sampling operation.
 *
 * This is relevant only if using a model with a sleep mode. 
 *
 * @return @ref npa_ret_t
 */
npa_ret_t npa_read_trigger(void)
{
    return NPA_ERR_IMPL;
}

/** 
 * @brief Read pressure from sensor. 
 *
 * Reads latest sample from sensor. If using a sensor with sleep mode, calling this
 * function triggers new sample and returns stale data.
 *
 * param[out] pressure_pa Pressure in pascals. 
 * @return @ref npa_ret_t
 *
 * @note Use system float as a type. 
 */
npa_ret_t npa_read_pressure(float* const pressure_pa)
{
    return NPA_ERR_IMPL;
}

/** 
 * @brief Read pressure and 8-bit temperature from sensor. 
 *
 * Reads latest sample from sensor. If using a sensor with sleep mode, calling this
 * function triggers new sample and returns stale data. Using lower resolution saves
 * a bit time as 9 bits less are clocked on the bus.
 *
 * param[out] pressure_pa Pressure in pascals. 
 * param[out] temperature Temperature in celcius.
 * @return @ref npa_ret_t
 *
 * @note Use system float as a type. 
 */
npa_ret_t npa_read_pressure_temp_lowres(float* const pressure_pa,
                                        float* const temperature_c)
{
    return NPA_ERR_IMPL;
}

/** 
 * @brief Read pressure and 11-bit temperature from sensor. 
 *
 * Reads latest sample from sensor. If using a sensor with sleep mode, calling this
 * function triggers new sample and returns stale data.
 *
 * param[out] pressure_pa Pressure in pascals.
 * param[out] temperature Temperature in celcius.
 * @return @ref npa_ret_t
 *
 * @note Use system float as a type. 
 */
npa_ret_t npa_read_pressure_temp_hires(float* const pressure_pa,
                                       float* const temperature_c)
{
    return NPA_ERR_IMPL;
}
