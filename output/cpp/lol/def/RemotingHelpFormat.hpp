#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct RemotingHelpFormat {  
    Brief_e = 4,
    Console_e = 5,
    Epytext_e = 2,
    Full_e = 1,
  };
  void to_json(json& j, const RemotingHelpFormat& v) {
  if(v == RemotingHelpFormat::Brief_e) {
    j = "Brief";
    return;
  }
  if(v == RemotingHelpFormat::Console_e) {
    j = "Console";
    return;
  }
  if(v == RemotingHelpFormat::Epytext_e) {
    j = "Epytext";
    return;
  }
  if(v == RemotingHelpFormat::Full_e) {
    j = "Full";
    return;
  }
  }
  void from_json(const json& j, RemotingHelpFormat& v) {
  if(j.get<std::string>() == "Brief") {
    v = RemotingHelpFormat::Brief_e;
    return;
  } 
  if(j.get<std::string>() == "Console") {
    v = RemotingHelpFormat::Console_e;
    return;
  } 
  if(j.get<std::string>() == "Epytext") {
    v = RemotingHelpFormat::Epytext_e;
    return;
  } 
  if(j.get<std::string>() == "Full") {
    v = RemotingHelpFormat::Full_e;
    return;
  } 
  }
}