#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct RemotingSerializedFormat {  
    JSON_e = 1,
    MsgPack_e = 3,
    YAML_e = 2,
  };
  inline void to_json(json& j, const RemotingSerializedFormat& v) {
    if(v == RemotingSerializedFormat::JSON_e) {
      j = "JSON";
      return;
    }
    if(v == RemotingSerializedFormat::MsgPack_e) {
      j = "MsgPack";
      return;
    }
    if(v == RemotingSerializedFormat::YAML_e) {
      j = "YAML";
      return;
    }
  }
  inline void from_json(const json& j, RemotingSerializedFormat& v) {
    if(j.get<std::string>() == "JSON") {
      v = RemotingSerializedFormat::JSON_e;
      return;
    } 
    if(j.get<std::string>() == "MsgPack") {
      v = RemotingSerializedFormat::MsgPack_e;
      return;
    } 
    if(j.get<std::string>() == "YAML") {
      v = RemotingSerializedFormat::YAML_e;
      return;
    } 
  }
}