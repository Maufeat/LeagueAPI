#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct ClientBracketMatchStatus {  
    COMPLETED_e = 2,
    STARTED_e = 1,
    UPCOMING_e = 0,
  };
  void to_json(json& j, const ClientBracketMatchStatus& v) {
  if(v == ClientBracketMatchStatus::COMPLETED_e) {
    j = "COMPLETED";
    return;
  }
  if(v == ClientBracketMatchStatus::STARTED_e) {
    j = "STARTED";
    return;
  }
  if(v == ClientBracketMatchStatus::UPCOMING_e) {
    j = "UPCOMING";
    return;
  }
  }
  void from_json(const json& j, ClientBracketMatchStatus& v) {
  if(j.get<std::string>() == "COMPLETED") {
    v = ClientBracketMatchStatus::COMPLETED_e;
    return;
  } 
  if(j.get<std::string>() == "STARTED") {
    v = ClientBracketMatchStatus::STARTED_e;
    return;
  } 
  if(j.get<std::string>() == "UPCOMING") {
    v = ClientBracketMatchStatus::UPCOMING_e;
    return;
  } 
  }
}