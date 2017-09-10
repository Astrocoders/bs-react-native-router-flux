import React from 'react'
import { Stack } from 'react-native-router-flux'

const ReStack = ({ name, ...props }) => <Stack key={name} {...props}/>

export default ReStack
