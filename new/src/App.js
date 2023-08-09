import './App.css';
import {BrowserRouter as Router,Routes,Route} from "react-router-dom";
function App() {
  return (
    <Router>
      <Routes>
        <Route exact path='/' Component={Home}/>
      </Routes>
    </Router>
  );
}

export default App;
