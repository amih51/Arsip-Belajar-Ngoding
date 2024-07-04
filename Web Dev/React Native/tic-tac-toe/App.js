import { StyleSheet, View } from "react-native";
import Game from "./src/Game";
import { LinearGradient } from "expo-linear-gradient";

export default function App() {
  return (
    <LinearGradient colors={["#34898db", "#ffffff"]} style={styles.container}>
      <View style={styles.overlay}>
        <Game />
      </View>
    </LinearGradient>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
  },
  overlay: {
    flex: 1,
    backgroundColor: rgba(255, 255, 255, 0.1),
    alignItems: "center",
    justifyContent: "center",
  },
});
