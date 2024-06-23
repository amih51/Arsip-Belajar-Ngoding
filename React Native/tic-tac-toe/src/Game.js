import { View, Text, StyleSheet } from "react-native";
import React from "react";
const Game = () => {
  return (
    <view style={styles.container}>
      <Text>Game</Text>;
    </view>
  );
};

export default Game;

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#fff",
    alignItems: "center",
    justifyContent: "center",
  },
});
