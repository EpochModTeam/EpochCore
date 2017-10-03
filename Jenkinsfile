pipeline {
  agent {
    node {
      label 'testing'
    }
    
  }
  stages {
    stage('Release') {
      steps {
        bat 'C:/GITTEMP/release_client.cmd'
      }
    }
  }
}