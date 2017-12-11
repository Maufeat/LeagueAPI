#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class RemotingSerializedFormat { /*Serialization format for remoting requests and results.*/ 
    JSON_e = 1, /**/ 
    MsgPack_e = 3, /**/ 
    YAML_e = 2, /**/ 
  };
  static void to_json(json& j, const RemotingSerializedFormat& v) {
    switch(v) { 
    case RemotingSerializedFormat::JSON_e:
      j = "JSON";
    break;
    case RemotingSerializedFormat::MsgPack_e:
      j = "MsgPack";
    break;
    case RemotingSerializedFormat::YAML_e:
      j = "YAML";
    break;
    };
  }
  static void from_json(const json& j, RemotingSerializedFormat& v) {
    auto s = j.get<std::string>(); 
    if(s == "JSON") {
      v = RemotingSerializedFormat::JSON_e;
      return;
    } 
    if(s == "MsgPack") {
      v = RemotingSerializedFormat::MsgPack_e;
      return;
    } 
    if(s == "YAML") {
      v = RemotingSerializedFormat::YAML_e;
      return;
    } 
  }
} 