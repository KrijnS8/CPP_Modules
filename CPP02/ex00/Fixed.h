/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/29 15:30:12 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/29 15:46:47 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H

class Fixed
{
	typedef Fixed F;

	private:
		static const int	_FRAC_BITS = 8;
		int					_value;
	
	public:
		Fixed( void );
		Fixed( const F& f );
		F& operator=(const F& other);
		~Fixed( void );

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif