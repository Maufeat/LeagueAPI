#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct RiotMessagingServiceTokenType {  
    Access_e = 1,
    Identity_e = 2,
    Unavailable_e = 0,
  };
  void to_json(json& j, const RiotMessagingServiceTokenType& v) {
  if(v == RiotMessagingServiceTokenType::Access_e) {
    j = "Access";
    return;
  }
  if(v == RiotMessagingServiceTokenType::Identity_e) {
    j = "Identity";
    return;
  }
  if(v == RiotMessagingServiceTokenType::Unavailable_e) {
    j = "Unavailable";
    return;
  }
  }
  void from_json(const json& j, RiotMessagingServiceTokenType& v) {
  if(j.get<std::string>() == "Access") {
    v = RiotMessagingServiceTokenType::Access_e;
    return;
  } 
  if(j.get<std::string>() == "Identity") {
    v = RiotMessagingServiceTokenType::Identity_e;
    return;
  } 
  if(j.get<std::string>() == "Unavailable") {
    v = RiotMessagingServiceTokenType::Unavailable_e;
    return;
  } 
  }
}