// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is auto-generated from
// gpu/command_buffer/build_gles2_cmd_buffer.py
// DO NOT EDIT!

#ifndef GPU_COMMAND_BUFFER_COMMON_GLES2_CMD_IDS_AUTOGEN_H_
#define GPU_COMMAND_BUFFER_COMMON_GLES2_CMD_IDS_AUTOGEN_H_

#define GLES2_COMMAND_LIST(OP) \
  OP(ActiveTexture)                                            /* 256 */ \
  OP(AttachShader)                                             /* 257 */ \
  OP(BindAttribLocation)                                       /* 258 */ \
  OP(BindAttribLocationBucket)                                 /* 259 */ \
  OP(BindBuffer)                                               /* 260 */ \
  OP(BindFramebuffer)                                          /* 261 */ \
  OP(BindRenderbuffer)                                         /* 262 */ \
  OP(BindTexture)                                              /* 263 */ \
  OP(BlendColor)                                               /* 264 */ \
  OP(BlendEquation)                                            /* 265 */ \
  OP(BlendEquationSeparate)                                    /* 266 */ \
  OP(BlendFunc)                                                /* 267 */ \
  OP(BlendFuncSeparate)                                        /* 268 */ \
  OP(BufferData)                                               /* 269 */ \
  OP(BufferSubData)                                            /* 270 */ \
  OP(CheckFramebufferStatus)                                   /* 271 */ \
  OP(Clear)                                                    /* 272 */ \
  OP(ClearColor)                                               /* 273 */ \
  OP(ClearDepthf)                                              /* 274 */ \
  OP(ClearStencil)                                             /* 275 */ \
  OP(ColorMask)                                                /* 276 */ \
  OP(CompileShader)                                            /* 277 */ \
  OP(CompressedTexImage2D)                                     /* 278 */ \
  OP(CompressedTexImage2DBucket)                               /* 279 */ \
  OP(CompressedTexSubImage2D)                                  /* 280 */ \
  OP(CompressedTexSubImage2DBucket)                            /* 281 */ \
  OP(CopyTexImage2D)                                           /* 282 */ \
  OP(CopyTexSubImage2D)                                        /* 283 */ \
  OP(CreateProgram)                                            /* 284 */ \
  OP(CreateShader)                                             /* 285 */ \
  OP(CullFace)                                                 /* 286 */ \
  OP(DeleteBuffers)                                            /* 287 */ \
  OP(DeleteBuffersImmediate)                                   /* 288 */ \
  OP(DeleteFramebuffers)                                       /* 289 */ \
  OP(DeleteFramebuffersImmediate)                              /* 290 */ \
  OP(DeleteProgram)                                            /* 291 */ \
  OP(DeleteRenderbuffers)                                      /* 292 */ \
  OP(DeleteRenderbuffersImmediate)                             /* 293 */ \
  OP(DeleteShader)                                             /* 294 */ \
  OP(DeleteTextures)                                           /* 295 */ \
  OP(DeleteTexturesImmediate)                                  /* 296 */ \
  OP(DepthFunc)                                                /* 297 */ \
  OP(DepthMask)                                                /* 298 */ \
  OP(DepthRangef)                                              /* 299 */ \
  OP(DetachShader)                                             /* 300 */ \
  OP(Disable)                                                  /* 301 */ \
  OP(DisableVertexAttribArray)                                 /* 302 */ \
  OP(DrawArrays)                                               /* 303 */ \
  OP(DrawElements)                                             /* 304 */ \
  OP(Enable)                                                   /* 305 */ \
  OP(EnableVertexAttribArray)                                  /* 306 */ \
  OP(Finish)                                                   /* 307 */ \
  OP(Flush)                                                    /* 308 */ \
  OP(FramebufferRenderbuffer)                                  /* 309 */ \
  OP(FramebufferTexture2D)                                     /* 310 */ \
  OP(FrontFace)                                                /* 311 */ \
  OP(GenBuffers)                                               /* 312 */ \
  OP(GenBuffersImmediate)                                      /* 313 */ \
  OP(GenerateMipmap)                                           /* 314 */ \
  OP(GenFramebuffers)                                          /* 315 */ \
  OP(GenFramebuffersImmediate)                                 /* 316 */ \
  OP(GenRenderbuffers)                                         /* 317 */ \
  OP(GenRenderbuffersImmediate)                                /* 318 */ \
  OP(GenTextures)                                              /* 319 */ \
  OP(GenTexturesImmediate)                                     /* 320 */ \
  OP(GetActiveAttrib)                                          /* 321 */ \
  OP(GetActiveUniform)                                         /* 322 */ \
  OP(GetAttachedShaders)                                       /* 323 */ \
  OP(GetAttribLocation)                                        /* 324 */ \
  OP(GetAttribLocationBucket)                                  /* 325 */ \
  OP(GetBooleanv)                                              /* 326 */ \
  OP(GetBufferParameteriv)                                     /* 327 */ \
  OP(GetError)                                                 /* 328 */ \
  OP(GetFloatv)                                                /* 329 */ \
  OP(GetFramebufferAttachmentParameteriv)                      /* 330 */ \
  OP(GetIntegerv)                                              /* 331 */ \
  OP(GetProgramiv)                                             /* 332 */ \
  OP(GetProgramInfoLog)                                        /* 333 */ \
  OP(GetRenderbufferParameteriv)                               /* 334 */ \
  OP(GetShaderiv)                                              /* 335 */ \
  OP(GetShaderInfoLog)                                         /* 336 */ \
  OP(GetShaderPrecisionFormat)                                 /* 337 */ \
  OP(GetShaderSource)                                          /* 338 */ \
  OP(GetString)                                                /* 339 */ \
  OP(GetTexParameterfv)                                        /* 340 */ \
  OP(GetTexParameteriv)                                        /* 341 */ \
  OP(GetUniformfv)                                             /* 342 */ \
  OP(GetUniformiv)                                             /* 343 */ \
  OP(GetUniformLocation)                                       /* 344 */ \
  OP(GetUniformLocationBucket)                                 /* 345 */ \
  OP(GetVertexAttribfv)                                        /* 346 */ \
  OP(GetVertexAttribiv)                                        /* 347 */ \
  OP(GetVertexAttribPointerv)                                  /* 348 */ \
  OP(Hint)                                                     /* 349 */ \
  OP(IsBuffer)                                                 /* 350 */ \
  OP(IsEnabled)                                                /* 351 */ \
  OP(IsFramebuffer)                                            /* 352 */ \
  OP(IsProgram)                                                /* 353 */ \
  OP(IsRenderbuffer)                                           /* 354 */ \
  OP(IsShader)                                                 /* 355 */ \
  OP(IsTexture)                                                /* 356 */ \
  OP(LineWidth)                                                /* 357 */ \
  OP(LinkProgram)                                              /* 358 */ \
  OP(PixelStorei)                                              /* 359 */ \
  OP(PolygonOffset)                                            /* 360 */ \
  OP(ReadPixels)                                               /* 361 */ \
  OP(ReleaseShaderCompiler)                                    /* 362 */ \
  OP(RenderbufferStorage)                                      /* 363 */ \
  OP(SampleCoverage)                                           /* 364 */ \
  OP(Scissor)                                                  /* 365 */ \
  OP(ShaderBinary)                                             /* 366 */ \
  OP(ShaderSource)                                             /* 367 */ \
  OP(ShaderSourceBucket)                                       /* 368 */ \
  OP(StencilFunc)                                              /* 369 */ \
  OP(StencilFuncSeparate)                                      /* 370 */ \
  OP(StencilMask)                                              /* 371 */ \
  OP(StencilMaskSeparate)                                      /* 372 */ \
  OP(StencilOp)                                                /* 373 */ \
  OP(StencilOpSeparate)                                        /* 374 */ \
  OP(TexImage2D)                                               /* 375 */ \
  OP(TexParameterf)                                            /* 376 */ \
  OP(TexParameterfv)                                           /* 377 */ \
  OP(TexParameterfvImmediate)                                  /* 378 */ \
  OP(TexParameteri)                                            /* 379 */ \
  OP(TexParameteriv)                                           /* 380 */ \
  OP(TexParameterivImmediate)                                  /* 381 */ \
  OP(TexSubImage2D)                                            /* 382 */ \
  OP(Uniform1f)                                                /* 383 */ \
  OP(Uniform1fv)                                               /* 384 */ \
  OP(Uniform1fvImmediate)                                      /* 385 */ \
  OP(Uniform1i)                                                /* 386 */ \
  OP(Uniform1iv)                                               /* 387 */ \
  OP(Uniform1ivImmediate)                                      /* 388 */ \
  OP(Uniform2f)                                                /* 389 */ \
  OP(Uniform2fv)                                               /* 390 */ \
  OP(Uniform2fvImmediate)                                      /* 391 */ \
  OP(Uniform2i)                                                /* 392 */ \
  OP(Uniform2iv)                                               /* 393 */ \
  OP(Uniform2ivImmediate)                                      /* 394 */ \
  OP(Uniform3f)                                                /* 395 */ \
  OP(Uniform3fv)                                               /* 396 */ \
  OP(Uniform3fvImmediate)                                      /* 397 */ \
  OP(Uniform3i)                                                /* 398 */ \
  OP(Uniform3iv)                                               /* 399 */ \
  OP(Uniform3ivImmediate)                                      /* 400 */ \
  OP(Uniform4f)                                                /* 401 */ \
  OP(Uniform4fv)                                               /* 402 */ \
  OP(Uniform4fvImmediate)                                      /* 403 */ \
  OP(Uniform4i)                                                /* 404 */ \
  OP(Uniform4iv)                                               /* 405 */ \
  OP(Uniform4ivImmediate)                                      /* 406 */ \
  OP(UniformMatrix2fv)                                         /* 407 */ \
  OP(UniformMatrix2fvImmediate)                                /* 408 */ \
  OP(UniformMatrix3fv)                                         /* 409 */ \
  OP(UniformMatrix3fvImmediate)                                /* 410 */ \
  OP(UniformMatrix4fv)                                         /* 411 */ \
  OP(UniformMatrix4fvImmediate)                                /* 412 */ \
  OP(UseProgram)                                               /* 413 */ \
  OP(ValidateProgram)                                          /* 414 */ \
  OP(VertexAttrib1f)                                           /* 415 */ \
  OP(VertexAttrib1fv)                                          /* 416 */ \
  OP(VertexAttrib1fvImmediate)                                 /* 417 */ \
  OP(VertexAttrib2f)                                           /* 418 */ \
  OP(VertexAttrib2fv)                                          /* 419 */ \
  OP(VertexAttrib2fvImmediate)                                 /* 420 */ \
  OP(VertexAttrib3f)                                           /* 421 */ \
  OP(VertexAttrib3fv)                                          /* 422 */ \
  OP(VertexAttrib3fvImmediate)                                 /* 423 */ \
  OP(VertexAttrib4f)                                           /* 424 */ \
  OP(VertexAttrib4fv)                                          /* 425 */ \
  OP(VertexAttrib4fvImmediate)                                 /* 426 */ \
  OP(VertexAttribPointer)                                      /* 427 */ \
  OP(Viewport)                                                 /* 428 */ \
  OP(BlitFramebufferCHROMIUM)                                  /* 429 */ \
  OP(RenderbufferStorageMultisampleCHROMIUM)                   /* 430 */ \
  OP(RenderbufferStorageMultisampleEXT)                        /* 431 */ \
  OP(FramebufferTexture2DMultisampleEXT)                       /* 432 */ \
  OP(TexStorage2DEXT)                                          /* 433 */ \
  OP(GenQueriesEXT)                                            /* 434 */ \
  OP(GenQueriesEXTImmediate)                                   /* 435 */ \
  OP(DeleteQueriesEXT)                                         /* 436 */ \
  OP(DeleteQueriesEXTImmediate)                                /* 437 */ \
  OP(BeginQueryEXT)                                            /* 438 */ \
  OP(EndQueryEXT)                                              /* 439 */ \
  OP(InsertEventMarkerEXT)                                     /* 440 */ \
  OP(PushGroupMarkerEXT)                                       /* 441 */ \
  OP(PopGroupMarkerEXT)                                        /* 442 */ \
  OP(GenVertexArraysOES)                                       /* 443 */ \
  OP(GenVertexArraysOESImmediate)                              /* 444 */ \
  OP(DeleteVertexArraysOES)                                    /* 445 */ \
  OP(DeleteVertexArraysOESImmediate)                           /* 446 */ \
  OP(IsVertexArrayOES)                                         /* 447 */ \
  OP(BindVertexArrayOES)                                       /* 448 */ \
  OP(SwapBuffers)                                              /* 449 */ \
  OP(GetMaxValueInBufferCHROMIUM)                              /* 450 */ \
  OP(GenSharedIdsCHROMIUM)                                     /* 451 */ \
  OP(DeleteSharedIdsCHROMIUM)                                  /* 452 */ \
  OP(RegisterSharedIdsCHROMIUM)                                /* 453 */ \
  OP(EnableFeatureCHROMIUM)                                    /* 454 */ \
  OP(ResizeCHROMIUM)                                           /* 455 */ \
  OP(GetRequestableExtensionsCHROMIUM)                         /* 456 */ \
  OP(RequestExtensionCHROMIUM)                                 /* 457 */ \
  OP(GetMultipleIntegervCHROMIUM)                              /* 458 */ \
  OP(GetProgramInfoCHROMIUM)                                   /* 459 */ \
  OP(CreateStreamTextureCHROMIUM)                              /* 460 */ \
  OP(DestroyStreamTextureCHROMIUM)                             /* 461 */ \
  OP(GetTranslatedShaderSourceANGLE)                           /* 462 */ \
  OP(PostSubBufferCHROMIUM)                                    /* 463 */ \
  OP(TexImageIOSurface2DCHROMIUM)                              /* 464 */ \
  OP(CopyTextureCHROMIUM)                                      /* 465 */ \
  OP(DrawArraysInstancedANGLE)                                 /* 466 */ \
  OP(DrawElementsInstancedANGLE)                               /* 467 */ \
  OP(VertexAttribDivisorANGLE)                                 /* 468 */ \
  OP(GenMailboxCHROMIUM)                                       /* 469 */ \
  OP(ProduceTextureCHROMIUM)                                   /* 470 */ \
  OP(ProduceTextureCHROMIUMImmediate)                          /* 471 */ \
  OP(ConsumeTextureCHROMIUM)                                   /* 472 */ \
  OP(ConsumeTextureCHROMIUMImmediate)                          /* 473 */ \
  OP(BindUniformLocationCHROMIUM)                              /* 474 */ \
  OP(BindUniformLocationCHROMIUMBucket)                        /* 475 */ \
  OP(BindTexImage2DCHROMIUM)                                   /* 476 */ \
  OP(ReleaseTexImage2DCHROMIUM)                                /* 477 */ \
  OP(TraceBeginCHROMIUM)                                       /* 478 */ \
  OP(TraceEndCHROMIUM)                                         /* 479 */ \
  OP(AsyncTexSubImage2DCHROMIUM)                               /* 480 */ \
  OP(AsyncTexImage2DCHROMIUM)                                  /* 481 */ \
  OP(WaitAsyncTexImage2DCHROMIUM)                              /* 482 */ \
  OP(DiscardFramebufferEXT)                                    /* 483 */ \
  OP(DiscardFramebufferEXTImmediate)                           /* 484 */ \
  OP(LoseContextCHROMIUM)                                      /* 485 */ \
  OP(InsertSyncPointCHROMIUM)                                  /* 486 */ \
  OP(WaitSyncPointCHROMIUM)                                    /* 487 */ \
  OP(DrawBuffersEXT)                                           /* 488 */ \
  OP(DrawBuffersEXTImmediate)                                  /* 489 */ \
  OP(DiscardBackbufferCHROMIUM)                                /* 490 */ \

enum CommandId {
  kStartPoint = cmd::kLastCommonId,  // All GLES2 commands start after this.
#define GLES2_CMD_OP(name) k ## name,
  GLES2_COMMAND_LIST(GLES2_CMD_OP)
#undef GLES2_CMD_OP
  kNumCommands
};

#endif  // GPU_COMMAND_BUFFER_COMMON_GLES2_CMD_IDS_AUTOGEN_H_

