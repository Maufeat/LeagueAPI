#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/BindingFullArgumentHelp.hpp>
#include <lol/def/BindingFullTypeIdentifier.hpp>
namespace lol {
  struct BindingFullFunctionHelp { 
    std::vector<BindingFullArgumentHelp> arguments;
    bool threadSafe;
    BindingFullTypeIdentifier returns;
    std::string nameSpace;
    std::string async;
    std::string description;
    std::string name;
    std::string help;
    std::vector<std::string> tags; 
  };
  void to_json(json& j, const BindingFullFunctionHelp& v) {
  j["arguments"] = v.arguments; 
  j["threadSafe"] = v.threadSafe; 
  j["returns"] = v.returns; 
  j["nameSpace"] = v.nameSpace; 
  j["async"] = v.async; 
  j["description"] = v.description; 
  j["name"] = v.name; 
  j["help"] = v.help; 
  j["tags"] = v.tags; 
  }
  void from_json(const json& j, BindingFullFunctionHelp& v) {
  v.arguments = j.at("arguments").get<std::vector<BindingFullArgumentHelp>>(); 
  v.threadSafe = j.at("threadSafe").get<bool>(); 
  v.returns = j.at("returns").get<BindingFullTypeIdentifier>(); 
  v.nameSpace = j.at("nameSpace").get<std::string>(); 
  v.async = j.at("async").get<std::string>(); 
  v.description = j.at("description").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  v.help = j.at("help").get<std::string>(); 
  v.tags = j.at("tags").get<std::vector<std::string>>(); 
  }
}