/*====================================================================================================*/
/*====================================================================================================*/
#include "drivers\stm32f3_system.h"

#include "uMultimeter.h"
/*====================================================================================================*/
/*====================================================================================================*/
void NMI_Handler( void ) { while(1); }
void HardFault_Handler( void ) { while(1); }
void MemManage_Handler( void ) { while(1); }
void BusFault_Handler( void ) { while(1); }
void UsageFault_Handler( void ) { while(1); }
void SVC_Handler( void ) {}
void DebugMon_Handler( void ) {}
void PendSV_Handler( void ) {}
void SysTick_Handler( void ) { HAL_IncTick(); }
/*====================================================================================================*/
/*====================================================================================================*/
//void WWDG_IRQHandler( void )
//void PVD_IRQHandler( void )
//void TAMPER_STAMP_IRQHandler( void )
//void RTC_WKUP_IRQHandler( void )
//void FLASH_IRQHandler( void )
//void RCC_IRQHandler( void )
//void EXTI0_IRQHandler( void )
//void EXTI1_IRQHandler( void )
//void EXTI2_TS_IRQHandler( void )
//void EXTI3_IRQHandler( void )
//void EXTI4_IRQHandler( void )
//void DMA1_Channel1_IRQHandler( void )
//void DMA1_Channel2_IRQHandler( void )
//void DMA1_Channel3_IRQHandler( void )
//void DMA1_Channel4_IRQHandler( void )
//void DMA1_Channel5_IRQHandler( void )
//void DMA1_Channel6_IRQHandler( void )
//void DMA1_Channel7_IRQHandler( void )
//void ADC1_2_IRQHandler( void )
//void USB_HP_CAN1_TX_IRQHandler( void )
//void USB_LP_CAN1_RX0_IRQHandler( void )
//void CAN1_RX1_IRQHandler( void )
//void CAN1_SCE_IRQHandler( void )
//void EXTI9_5_IRQHandler( void )
//void TIM1_BRK_TIM15_IRQHandler( void )
//void TIM1_UP_TIM16_IRQHandler( void )
//void TIM1_TRG_COM_TIM17_IRQHandler( void )
//void TIM1_CC_IRQHandler( void )
void TIM2_IRQHandler( void )
{
  if(TIM_GetITStatus(TIM2, TIM_IT_Update) != RESET) {
    TIM_ClearITPendingBit(TIM2, TIM_IT_Update);
    TIM2_Update_irqEven();
  }
}
void TIM3_IRQHandler( void )
{
  if(TIM_GetITStatus(TIM3, TIM_IT_Update) != RESET) {
    TIM_ClearITPendingBit(TIM3, TIM_IT_Update);
    TIM3_Update_irqEven();
  }
}
//void TIM4_IRQHandler( void )
//void I2C1_EV_IRQHandler( void )
//void I2C1_ER_IRQHandler( void )
//void I2C2_EV_IRQHandler( void )
//void I2C2_ER_IRQHandler( void )
//void SPI1_IRQHandler( void )
//void SPI2_IRQHandler( void )
//void USART1_IRQHandler( void )
//void USART2_IRQHandler( void )
//void USART3_IRQHandler( void )
//void EXTI15_10_IRQHandler( void )
//void RTC_Alarm_IRQHandler( void )
//void USBWakeUp_IRQHandler( void )
//void TIM8_BRK_IRQHandler( void )
//void TIM8_UP_IRQHandler( void )
//void TIM8_TRG_COM_IRQHandler( void )
//void TIM8_CC_IRQHandler( void )
//void ADC3_IRQHandler( void )
//void SPI3_IRQHandler( void )
//void UART4_IRQHandler( void )
//void UART5_IRQHandler( void )
//void TIM6_DAC_IRQHandler( void )
//void TIM7_IRQHandler( void )
//void DMA2_Channel1_IRQHandler( void )
//void DMA2_Channel2_IRQHandler( void )
//void DMA2_Channel3_IRQHandler( void )
//void DMA2_Channel4_IRQHandler( void )
//void DMA2_Channel5_IRQHandler( void )
//void ADC4_IRQHandler( void )
//void COMP1_2_3_IRQHandler( void )
//void COMP4_5_6_IRQHandler( void )
//void COMP7_IRQHandler( void )
//void USB_HP_IRQHandler( void )
//void USB_LP_IRQHandler( void )
//void USBWakeUp_RMP_IRQHandler( void )
//void FPU_IRQHandler( void )
/*====================================================================================================*/
/*====================================================================================================*/