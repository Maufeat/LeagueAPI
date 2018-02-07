#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BuildInfo { 
    int32_t contentBuildId;
    int32_t codeBuildId;
    int32_t gameDataBuildId;
    std::string branch;
    std::string branchFull;
    std::string gameBranch;
    std::string gameBranchFull;
    std::string patchline;
    std::string version;
    std::string patchlineVisibleName; 
  };
  inline void to_json(json& j, const BuildInfo& v) {
    j["contentBuildId"] = v.contentBuildId; 
    j["codeBuildId"] = v.codeBuildId; 
    j["gameDataBuildId"] = v.gameDataBuildId; 
    j["branch"] = v.branch; 
    j["branchFull"] = v.branchFull; 
    j["gameBranch"] = v.gameBranch; 
    j["gameBranchFull"] = v.gameBranchFull; 
    j["patchline"] = v.patchline; 
    j["version"] = v.version; 
    j["patchlineVisibleName"] = v.patchlineVisibleName; 
  }
  inline void from_json(const json& j, BuildInfo& v) {
    v.contentBuildId = j.at("contentBuildId").get<int32_t>(); 
    v.codeBuildId = j.at("codeBuildId").get<int32_t>(); 
    v.gameDataBuildId = j.at("gameDataBuildId").get<int32_t>(); 
    v.branch = j.at("branch").get<std::string>(); 
    v.branchFull = j.at("branchFull").get<std::string>(); 
    v.gameBranch = j.at("gameBranch").get<std::string>(); 
    v.gameBranchFull = j.at("gameBranchFull").get<std::string>(); 
    v.patchline = j.at("patchline").get<std::string>(); 
    v.version = j.at("version").get<std::string>(); 
    v.patchlineVisibleName = j.at("patchlineVisibleName").get<std::string>(); 
  }
}