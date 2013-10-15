#ifndef TEST_H
#define TEST_H


class Test
{
    public:
        /** Default constructor */
        Test();
        /** Default destructor */
        virtual ~Test();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Test(const Test& other);
        /** Assignment operator
         *  \param other Object to assign from
         *  \return A reference to this
         */
        Test& operator=(const Test& other);
        /** Access m_Counter
         * \return The current value of m_Counter
         */
        unsigned int GetCounter() { return m_Counter; }
        /** Set m_Counter
         * \param val New value to set
         */
        void SetCounter(unsigned int val) { m_Counter = val; }
    protected:
    private:
        unsigned int m_Counter; //!< Member variable "m_Counter"
};

#endif // TEST_H
