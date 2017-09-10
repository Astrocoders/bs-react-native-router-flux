import React from 'react'
import { Scene } from 'react-native-router-flux'

const ReScene = ({ name, ...props }) => <Scene key={name} {...props}/>

export default ReScene
