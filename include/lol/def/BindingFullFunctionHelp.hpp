#pragma once
#include "../base_def.hpp" 
#include "BindingFullTypeIdentifier.hpp"
#include "BindingFullArgumentHelp.hpp"
namespace lol {
  struct BindingFullFunctionHelp { 
    std::string name;
    BindingFullTypeIdentifier returns;
    std::string help;
    std::vector<BindingFullArgumentHelp> arguments;
    bool threadSafe;
    std::string description;
    std::string nameSpace;
    std::string async;
    std::vector<std::string> tags; 
  };
  inline void to_json(json& j, const BindingFullFunctionHelp& v) {
    j["name"] = v.name; 
    j["returns"] = v.returns; 
    j["help"] = v.help; 
    j["arguments"] = v.arguments; 
    j["threadSafe"] = v.threadSafe; 
    j["description"] = v.description; 
    j["nameSpace"] = v.nameSpace; 
    j["async"] = v.async; 
    j["tags"] = v.tags; 
  }
  inline void from_json(const json& j, BindingFullFunctionHelp& v) {
    v.name = j.at("name").get<std::string>(); 
    v.returns = j.at("returns").get<BindingFullTypeIdentifier>(); 
    v.help = j.at("help").get<std::string>(); 
    v.arguments = j.at("arguments").get<std::vector<BindingFullArgumentHelp>>(); 
    v.threadSafe = j.at("threadSafe").get<bool>(); 
    v.description = j.at("description").get<std::string>(); 
    v.nameSpace = j.at("nameSpace").get<std::string>(); 
    v.async = j.at("async").get<std::string>(); 
    v.tags = j.at("tags").get<std::vector<std::string>>(); 
  }
}